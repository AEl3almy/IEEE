radius = float(input("enter the radius : "))
sum = 22 / 7 * radius * radius
print("the area = ", sum)

"""
temperature = float(input("enter the temperature degree in celsius : "))
result = (temperature * 1.8) + 32
print("the temperature in fahrenheit is : ",result)
"""
"""
examples = [5 , 2 , 8 , 50 , 80 , 3 , 105]
print("the max num is : " , max(examples))
print("the min num is : " , min(examples))
"""
"""
tuple1 = (1 , "ahmed" , 25 , "IEEE")
tuple2 = (1 , "ahmed" , 25 , "IEEE")
if tuple1==tuple2 :
    print("the tuble is match")
else :
    print("correct what u do")
"""
"""
n = int(input("enter the number : "))
result = 1
i = 1
while i <= n:
  result *= i
  i += 1

print(f"The factorial of {n} is {result}")
"""
"""
num = int(input("enter the number : "))
i = 1
result = 0
while i<=num :
    result += i
    i+= 1
print(f"the sum of numbers from {num} = {result}")
"""
"""
string_list = ["hello", "world", "python", "programming"]

first_halves = []
second_halves = []

for string in string_list:
  midpoint = len(string) // 2
  first_halves.append(string[:midpoint])
  second_halves.append(string[midpoint:])

print("First halves:", first_halves)
print("Second halves:", second_halves)
"""
