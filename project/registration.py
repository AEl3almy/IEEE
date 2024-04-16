import json
def collect_user_info():
    #Collects user information and saves it to the info.txt file.

    print("hello my friend (:")

    data = {}
    data["first name"] = input("please enter the first name : ")
    data["last name"] = input("please enter the last name : ")
    data["date of birth"] = input("please enter your birthday  : ")
    data["username"] = input("please enter the user name : ")
    data["email"] = input("please enter the email : ")
    data["password"] = input("please enter the password  : ")

    with open("info.txt", "a+") as file:
        json.dump(data, file)

