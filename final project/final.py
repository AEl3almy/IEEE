def ask_user_status():
  #Asks the user if they are new or old
  while True:
    user_input = input("Are you new or old? (Enter 'new' or 'old'): ").lower()
    if user_input in ["new", "old"]:
      return user_input
    print("Invalid input. Please enter 'new' or 'old'.")
user_status = ask_user_status()

if user_status == "new":
  print("Welcome, i want u to sign-up !")
  import register
  register.register()

else:
  print("Welcome back, login please (: ")
  import login
  login.login()

