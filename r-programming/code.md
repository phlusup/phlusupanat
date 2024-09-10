# My First Step Data Analyst with Datasets in R Studio
1. [Introduction](#introduction)
2. [About Dataset](#introduction)
3. [Analyst](#introduction)
     1. [What is the correlation between the carat of the diamonds and the price ?](#subparagraph1)
## Introduction <a name="introduction"></a>
I shared basic R programming skill with Five Questions by Datasets for R Practice. ( diamonds, mtcars and chickwts)

## About Dataset <a name="About Data"></a>

diamonds -
A dataset containing the prices and other attributes of almost 54,000 diamonds.
* price : price in US dollars ($326–$18,823)
* carat : weight of the diamond (0.2–5.01)
* cut : quality of the cut (Fair, Good, Very Good, Premium, Ideal)
* color : diamond colour, from D (best) to J (worst)

mtcars -
The data was extracted from the 1974 Motor Trend US magazine, and comprises fuel consumption and 10 aspects of automobile design and performance for 32 automobiles (1973–74 models).
* mpg : miles/(US) gallon
* hp : gross horsepower
* wt : weight (1000 lbs)
* am : transmission (0 = automatic, 1 = manual)

chickwts -
An experiment was conducted to measure and compare the effectiveness of various feed supplements on the growth rate of chickens.
* weight : the chick weight.
* feed : the feed type

## Analyst <a name="About Data"></a>
### What is the correlation between the carat of the diamonds and the price ? <a name="subparagraph1"></a>
This question, I used random sampling by 5 percent of dataset ( diamonds ). I’m a filter quality of the cut such as ideal, premium, very good, and good. and I’m provided this data in new object ( small_df ). I used library ggplot in part of tidyverse. In aesthetic mappings in define x axis = carat, y axis = price and colour divided by quality of the cut. I used facet_wrap for subplot by quality of the cut.
```R
set.seed(18)
small_df <- diamonds %>%
  sample_frac(0.05) %>%
  filter(cut %in% c("Ideal","Premium","Very Good", "Good"))

ggplot(small_df,aes(carat, price, col = cut)) + 
  geom_point(alpha = 0.5, size = 3) +
  theme_minimal()+
  facet_wrap(~cut) +
  labs(title = "Correlation of Diamonds Carat and Price (USD)",
    x = "Carat",
    y = "Price (USD)")
```
