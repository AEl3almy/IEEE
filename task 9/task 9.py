
def is_number_prime (num) :
    if num <= 1: #the value must be greater than 1
        print("the value is not prime ")
        return
    elif num == 2 or num == 3 or num == 5:
        print(f"the value {num} is prime")
        return
    elif num % 2 == 0 or num % 3 == 0 or num % 5 == 0: #this is the condition
        print(f"the value {num} is not prime")
        return
    else:
        print(f"the value {num} is prime")
        return
try:
    num = int(input("please enter the number : "))
    is_number_prime(num) #call the function
except: #if the user put anything except the numbers
    print("please enter the true value ")

"""
from math import * # i use this library to use function sqrt
def square (num):
    print(sqrt(num)) #get square root the number and print it 
    return
try :
    num = float(input("enter the positive number: ")) # the user must put the valid value
    square(num) # call the function 
except ValueError: # if the user put invalid value 
    print("invalid input. bro u put a negative number or a word ")
"""
"""
def div (num1,num2) :
    try :
        print(num1 / num2) #we cannot devide by zero so i try to avoid it
    except ZeroDivisionError :
        print("bro we cannot divide by zero")


    return
print("the formula is num1/num2") #this important to make the user know how the programe work
try :
    num1 = float(input("please enter num1 : "))
    num2 = float(input("please enter num2 : "))
    div(num1, num2)

except ValueError: #i must expect the user put any thing except the numbers 
    print("bro u didn’t put the number")
"""
"""
def count_even_numbers (list): # we use the counter passes through all values
    counter = 0
    for z in list :
        if z %2 == 0 :
            counter += 1
    print("the count of even number is " , counter)
list = []
n=0
try : # i have to sure if the user don’t put the invalid value
    range = int(input("enter the range of values : ")) #i need to know how many values the user will input
    if range > 0 :
        while n < range:
            i = int(input("enter the numbers : "))
            n += 1
            list.append(i) #here i get the values and add it into list
        print(list)
        count_even_numbers(list)
    else:
        print("Invaild input. please don’t enter the negative number or zero")

except :
    print("Invaild input. please don’t enter the string")
"""
"""
def get_the_average (sum) :
    counter = 0 
    for z in list :
        counter +=1 # to know the numbers of values 
    result = sum / counter # to get the average of the numbers 
    print("the average for the numbers are" , result)

list = [] #empty list to put the value from the user inside it 
sum = 0
n=0
try :
    range = int(input("enter the range of values : ")) # i must know the numbers of value the user will input
    if range > 0 :
        while n < range:
            i = int(input("enter the numbers : "))
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
def get_unique_elements(data_list):

  unique_list = []
  for item in data_list:
    if item not in unique_list:
      unique_list.append(item)
  return unique_list

my_list = [1, 2, 2, 3, 2, 1, 5, 5]
unique_list = get_unique_elements(my_list)
print("Original list:", my_list)
print("Unique elements:", unique_list)
"""
"""
def three_sum(nums, target):

  # Sort the list for efficient two-pointer search
  nums.sort()

  for i in range(len(nums) - 2):
    # Skip duplicates (avoid considering the same triplet multiple times)
    if i > 0 and nums[i] == nums[i - 1]:
      continue

    left, right = i + 1, len(nums) - 1
    while left < right:
      # Calculate the sum of the current three elements
      current_sum = nums[i] + nums[left] + nums[right]

      if current_sum == target:
        # Found the three numbers that add up to the target
        return [i, left, right]
      elif current_sum < target:
        # Need a larger sum, move the left pointer
        left += 1
      else:
        # Need a smaller sum, move the right pointer
        right -= 1

  # No three numbers found that add up to the target
  return []

nums = [1 , 3 , 5 , 6 , 9]
target = 16
indices = three_sum(nums, target)

if indices:
  print("Indices of the three numbers that add up to", target, ":", indices)
else:
  print("No three numbers found that add up to", target)
"""
"""
def find_max_distance(data_list):

  # Create a dictionary to store the last index of each number encountered
  last_seen = {}
  max_distance = 0  # Initialize with 0

  for i, num in enumerate(data_list):
    # Check if the number has been seen before
    if num in last_seen:
      distance = i - last_seen[num]
      max_distance = max(max_distance, distance)
      print(f"Distance between {num} and {num} = {distance} (Indices: {last_seen[num]} and {i})")
    last_seen[num] = i

  return max_distance

data_list = [2, 5, 3, 4, 5, 1, 6, 7, 6]
max_dist = find_max_distance(data_list)

print("Maximum distance:", max_dist)
"""
