# install package
install.packages("tidyverse")
install.packages("caret")
install.packages("mlbench")

# load package 

library("tidyverse")
library("caret")
library("mlbench")

# load dataset for regression KNN
data()
data("BostonHousing")
df <- BostonHousing

# Check data 

glimpse(df)
head(df)
tail(df)

sum(is.na(df))


# Prepare dataset First I'll use split data into training 70% and testing 30%

## split data 
set.seed(42)
n <- nrow(df)
id <- sample(1:n, size = n*0.7, replace = FALSE)
train_data <- df[id, ]
test_data <- df[-id, ]

## train model 
set.seed(42)
ctrl <- trainControl(method = "cv",
                     number = 5,
                     verboseIter = TRUE)
knn_model <- train(medv ~ .,
                   data = train_data,
                   method = "knn",
                   metric = "RMSE",
                   trControl = ctrl)

## test model 

p <- predict(knn_model, newdata = test_data)


## rmse 

rmse <- sqrt(mean((p-test_data$medv)**2))


# linear regression 

data()
data("BostonHousing")
df <- BostonHousing

# check data / Inspect data 

glimpse(df)
head(df)
tail(df)

sum(is.na(df))

# split data
set.seed(42)
n <- nrow(df)
id <- sample(1:n, size = n*0.7, replace = FALSE)
train_data <- df[id, ]
test_data <- df[-id, ]

# train model 
set.seed(42)
lm_model <- train(medv ~ crim,
                  data = train_data,
                  method = "lm")

# test model 

p <- predict(lm_model, newdata = test_data)

# rmse 

rmse <- sqrt(mean((p - test_data$medv)**2))


# logistic regression 
data()
data("PimaIndiansDiabetes")
df <- PimaIndiansDiabetes

# Inspect data 
glimpse(df)
head(df)
tail(df)

sum(is.na(df))

# split data 
set.seed(42)
n <- nrow(df)
id <- sample(1:n, size = n*0.8, replace = FALSE)
train_data <- df[id, ]
test_data <- df[-id, ]

# train model 
set.seed(42)
ctrl <- trainControl(method = "cv",
                     number = 5)
glm_model <- train(diabetes ~ glucose + mass + age,
                   data = train_data,
                   method = "glm",
                   trControl = ctrl)

# test model 

p <- predict(glm_model, newdata = test_data)

# accuracy

accuracy  <- mean( p == test_data$diabetes)



# ElasticNet Model 

data("PimaIndiansDiabetes")
df <- PimaIndiansDiabetes

# Inspect data 
glimpse(df)
head(df)
tail(df)

sum(is.na(df))

# split data 
set.seed(42)
n <- nrow(df)
id <- sample(1:n, size = n*0.8, replace = FALSE)
train_data <- df[id, ]
test_data <- df[-id, ]

# train model 
set.seed(42)
ctrl <- trainControl(method = "cv",
                     number = 5,
                     verboseIter = TRUE)
enet_model <- train(diabetes ~ glucose + mass + age,
                    data = train_data,
                    method = "glmnet",
                    trControl = ctrl)


# test model 

p <- predict(enet_model, newdata = test_data)

# accuracy

accuracy <- mean(p == test_data$diabetes)















