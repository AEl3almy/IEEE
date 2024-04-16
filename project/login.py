def check_user_data(user_input):
  try:
    with open("info.txt", "r") as file:
      for line in file:
        username, password = dict(eval(line.strip()))
        if line == user_input:
          return True

  except FileNotFoundError:
    print("Error: File not found.")

  except (SyntaxError, ValueError):
    print("Error: Invalid data format.")

  return False


user_info = {
  "username": input("Enter username: "),
  "password": input("Enter password: "),
}

if check_user_data(user_info):
  print("Valid user data. Welcome!")
else:
  print("User data not found.")
