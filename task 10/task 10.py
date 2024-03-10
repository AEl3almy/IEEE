"""
from math import *
def round (num) :
    print(floor(num))
    return
# i am use the func. floor to round the number
num = float(input("enter the number u need to round it (: ---> "))
round(num)
"""
"""
dictionary = { # i make the dic. and put the values and keys 
    "name" : "ahmed",
    "age" : "20",
    "grade" : "very good"
}
print(dictionary)
print(dictionary.keys())
print(dictionary.values())
"""
"""
list = ["ahmed", "shady", 20, "ahmed"]
new_list = []
for i in list: #to make i pass in all values in list 
  count = list.count(i)
  if i not in new_list: # to ensure there is no repetition
    new_list.append(i) #to put all the values in new list

print(new_list)
"""
"""
text1 = input("enter the text : ")
text2 = text1[::-1]  #here we reverse the text before the check
if text1 == text2 : #this is the condition to check
    print("the string is a palindrome")
else :
    print("the string is not a palindrome")
"""
"""
def get_the_average (sum) :
    counter = 0
    for z in list :
        counter +=1 # to know the numbers of values
    result = sum / counter # to get the average of the numbers
    print(f"the average for the numbers are {result:0.6f}") #i use :0.6 to get 6 numbers after the decimal point

list = [] #empty list to put the value from the user inside it
sum = 0
n=0
try :
    range = int(input("enter the range of values : ")) # i must know the numbers of value the user will input
    if range > 0 :
        while n < range:
            i = float(input("enter the numbers : "))
            sum += i
            n += 1
            list.append(i) #this loop to put all the values from user to the empty list
        print(list)
        print("the sum of the list = " , sum)
        get_the_average(sum)
    else: # to handle any error
        print("Invaild input. please don’t enter the negative number or zero")
except :
    print("Invaild input. please don’t enter the string")
"""
"""
from math import *
print(round(3.7)) #Rounds a number to the nearest integer.If the decimal part is exactly halfway between two integers
print(floor(3.9)) #Always rounds towards zero.
print(ceil(3.7)) #Always rounds away from zero.
"""
"""
def word_frequency(text):

  # Convert the text to lowercase and split into words.
  words = text.lower().split()

  # Create a dictionary to store word frequencies.
  word_counts = {}
  for word in words:
    # Remove punctuation from the word.
    word = word.strip(".,?!:;-'")
    if word:  # Check if the word is not empty after stripping punctuation
      if word in word_counts:
        word_counts[word] += 1
      else:
        word_counts[word] = 1

  return word_counts


text = "ahmed shady is the best engineer i have ever seen "
word_counts = word_frequency(text)

# Print the word frequencies
for word, count in word_counts.items():
  print(f"{word}: {count}")
"""
"""
import script #this is another modules i made it
nums = [1, 7, 4, 5, 7, 4, 3, 1]
target = 9 #if the target does not exist in list the output is [-1,-1]
script.sort(nums) #to call the modules with func.
result = script.find_first_last(nums, target)
print(result)
"""