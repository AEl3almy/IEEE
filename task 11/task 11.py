"""
import pandas #this func. to get the data analyses
my_data = pandas.read_csv("points.txt") #here i can convert the text file to csv
print(my_data)
my_data.to_csv("points.csv",index =None)#i dont want the index so i get the value is none
#in this operation the txte file must be rows with comma sebarated
"""
"""
#this function is more different
file = open("points.txt","r") # i use the the func. open to open any file but the file must in python file path
print(file.read()) # there is a lot of mods , here i use r "r" to read file and know what inside it
file.close() # i must close the file after i open it to avoid any problem
"""