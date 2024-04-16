def login():
    username_or_email = input("Enter your username or email: ")
    password = input("Enter your password: ")

    with open(r"C:\Users\medos\OneDrive\Desktop\info.txt", "r") as file: #open the file to check if the data is correct
        for line in file:
            values = line.strip().split(",") #remove spaces and make each word alone
            if len(values) == 3 and (username_or_email == values[0] or username_or_email == values[2]) and password == values[1]:
                print("Login successful!") #this condition to check the data in txt file
                return
        print("Unavailable username/email or password. Please try again.")
