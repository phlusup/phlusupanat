# Install package
install.packages("tidyverse")
install.packages("caret")
install.packages("gridExtra")
install.packages("metan")

# Load package 
library("tidyverse")
library("caret")
library("gridExtra")
library("metan")

# Read csv file 
df <- read_csv("StudentPerformanceFactors.csv")

# Data preprocessing
glimpse(df)
View(df)
head(df)
tail(df)
names(df)
summary(df)

## Check columns name
names(df)

## Change column names to lowercase and Check missing value
names(df) <- tolower(names(df))
sum(is.na(df))

## Delete missing value 
df <- na.omit(df)
sum(is.na(df))

##To select only columns that are NOT character data type 
df_numeric <- df %>%
  select_if(negate(is.character))

## Convert character data type to factor data type
df$family_income <- factor(df$family_income,
                       levels = c("Low","Medium","High"),
                       labels = c("Low","Medium","High"),
                       ordered = T)
df$parental_education_level <- factor(df$parental_education_level,
                           levels = c("High School","College","Postgraduate"),
                           labels = c("High School","College","Postgraduate"),
                           ordered = T)
df$gender <- as.factor(df$gender)


# Exploration data analysis

## Create the individual plots

p1 <- ggplot(df, aes(hours_studied, fill = gender)) + 
  geom_bar() +
  theme_minimal() +
  facet_grid(gender ~ .) +
  labs(title = "Studied hours per week by Gender",
       x = "Studied hours") + 
  theme(plot.title = element_text(hjust = 0.5))


p2 <- ggplot(df, aes(sleep_hours, fill = gender)) + 
  geom_bar(position = position_dodge()) +
  theme_minimal() +
  labs(title = "Average number of hours of sleep per night by Gender",
     x = "Sleep hours") + 
  theme(plot.title = element_text(hjust = 0.5))


p3 <- ggplot(df, aes(parental_education_level  , fill = gender)) + 
  geom_bar(position = position_dodge()) +
  theme_minimal() +
  labs(title = "Parental education level by Gender",
       x = "Parental education level") + 
  theme(plot.title = element_text(hjust = 0.5))


p4 <- ggplot(df, aes(family_income  , fill = gender)) + 
  geom_bar(position = position_dodge()) +
  theme_minimal() +
  labs(title = "Family income by Gender",
       x = "Family income") + 
  theme(plot.title = element_text(hjust = 0.5))


p5 <- ggplot(df, aes(peer_influence  , fill = gender)) + 
  geom_bar(position = position_dodge()) +
  theme_minimal() +
  labs(title = "Influence of peers by Gender",
       x = "Peer influence") + 
  theme(plot.title = element_text(hjust = 0.5))


p6 <- ggplot(df, aes(exam_score, fill  = gender)) + 
  geom_histogram(color = "white") +
  theme_minimal() +
  facet_grid(gender ~ .) +
  labs(title = "Exam score by Gender",
       x = "Exam score") + 
  theme(plot.title = element_text(hjust = 0.5))


## Arrange the plots in a grid
grid.arrange(p1, p2, p3, p4, p5, p6, ncol = 2)

## Correlation Matrix

corrl <- corr_coef(df_numeric)
plot(corrl)

# Built Basic Machine Learning Model
# Split data 
set.seed(42) 
n <- nrow(df)
id <- sample(1:n, size = 0.8*n, replace = FALSE)
train_data <- df[id, ]
test_data <- df[-id, ]

# Linear regression with K-Fold CV 
set.seed(42)
ctrl <- trainControl(method = "cv",
                     number = 5,
                     verboseIter = TRUE)
lm_model <- train(exam_score ~ previous_scores + hours_studied + attendance + tutoring_sessions,
                  data = train_data,
                  method = "lm",
                  trControl = ctrl)


p_lm <- predict(lm_model, newdata = test_data)

rmse_lm <- sqrt(mean( (p_lm - test_data$exam_score)**2 ))

# KNN with K-Fold CV 
set.seed(42)
ctrl <- trainControl(method = "cv",
                     number = 5,
                     verboseIter = TRUE)
knn_model <- train(exam_score ~ previous_scores + hours_studied + attendance + tutoring_sessions,
                  data = train_data,
                  method = "knn",
                  trControl = ctrl,
                  tuneLength = 4)

p_knn <- predict(knn_model, newdata = test_data)

rmse_knn <- sqrt(mean( (p_knn - test_data$exam_score)**2 ))


# Random Forest with K-Fold CV 
set.seed(42)
ctrl <- trainControl(method = "cv",
                     number = 5,
                     verboseIter = TRUE)
rf_model <- train(exam_score ~ previous_scores + hours_studied + attendance + tutoring_sessions,
                   data = train_data,
                   method = "rf",
                   trControl = ctrl)

p_rf <- predict(rf_model, newdata = test_data)

rmse_rf <- sqrt(mean( (p_rf - test_data$exam_score)**2 ))

 

conclusion <- data.frame(
  model = c("Linear regression with K-Fold CV","KNN with K-Fold CV", "Random Forest with K-Fold CV "),
rmse_train = c("2.543691", "2.698024", "2.677984"),
rmse_test = c("2.218041", "2.397026", "2.383069")
)

print(conclusion)
