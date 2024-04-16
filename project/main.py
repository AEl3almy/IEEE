def ask_user_status():
  """Asks the user if they are new or old"""
  while True:
    user_input = input("Are you new or old? (Enter 'new' or 'old'): ").lower()
    if user_input in ["new", "old"]:
      return user_input
    print("Invalid input. Please enter 'new' or 'old'.")
import registration
user_status = ask_user_status()

if user_status == "new":
  print("Welcome, new user!")
  registration.collect_user_info()

else:
  import login
  print("Welcome back, old user!")
  user_info = {
    "username": input("Enter username: "),
    "password": input("Enter password: "),
  }
  login.check_user_data(user_info)

  






