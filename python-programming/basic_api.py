# import requests
from requests import get

# check API
response = get("https://potterapi-fedeperin.vercel.app/en/books")
response.status_code

# check content in API 
response.json()

#get data
from requests import get
from time import sleep
base_url = "https://potterapi-fedeperin.vercel.app/en/books"

books = []

for i in range(1,6):
    response = get(base_url)
    response_js = response.json()
    title = response.json()[i]["title"]
    releasedate = response.json()[i]["releaseDate"]
    results = [title, releasedate]
    books.append(results)
    sleep(2)
print(books)

# write csv file
import csv
header = ["name", "releasedate"]
with open("harry_potter.csv", "w") as file:
    writer = csv.writer(file)
    writer.writerow(header)
    writer.writerows(books)
  
# Check contect in file 
!cat harry_potter.csv

# import pandas for create dataframe
import pandas as pd

df = pd.read_csv("harry_potter.csv")
