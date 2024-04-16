import re #to deal with text
import datetime #to calculate the date

def register():
    while True:
        first_name = input("Enter your first name: ")
        if not first_name or not first_name.isalpha(): #use function to making sure if the name is empty or contains non-alphabetical characters
            print("Please enter a valid first name (letters only).")
            continue
        else:
            break

    while True:
        last_name = input("Enter your last name: ")
        if not last_name or not last_name.isalpha():
            print("Please enter a valid last name (letters only).")
            continue
        else:
            break

    while True:
        username = input("enter a username: ")
        if not username or not re.fullmatch(r'\w+', username): #\W+ check if the username does not have any sympols
            print("Please enter a valid username (letters, numbers, and underscores only).")
            continue
        else:
            break

    while True:
        birthdate = input("Enter your birthdate (YYYY-MM-DD): ")
        if re.fullmatch(r'\d{4}-\d{2}-\d{2}', birthdate): #this format to make user input the birthday format correct
            try:
                year, month, day = map(int, birthdate.split('-'))
                user_birthday = datetime.date(year, month, day)
                age = datetime.date.today() - user_birthday #to know the difference between the birthday and the date of today
                break
            except ValueError:
                print("Please enter a valid birthdate (format: YYYY-MM-DD).")
        else:
            print("Please enter a valid birthdate (format: YYYY-MM-DD).")

    print(f"Your age is {age.days // 365} years.")

    while True:
        email = input("Enter your email: ")
        if not re.fullmatch(r'[^@]+@[^@]+\.[^@]+', email): #this is expression to check if the email address is valid
            print("Please enter a valid email address.")
            continue
        else:
            break

    while True:
        password = input("enter a password: ")
        if not re.fullmatch(r'\w+', password):
            print("Please enter a valid password (letters, numbers, and underscores only).")
            continue
        else:
            break

    user_data = { #put all data in dictionary
        "first_name": first_name,
        "last_name": last_name,
        "username": username,
        "birthdate": birthdate,
        "email": email,
        "password": password,
    }

    with open(r"C:\Users\medos\OneDrive\Desktop\info.txt", "a") as file: #store it in txt file
        file.write(f"{user_data['username']},{user_data['password']},{user_data['email']}\n")

    print("Sign-up successful!")

