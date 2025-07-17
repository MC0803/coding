age = int(input(" Enter your age: "))
citizen = bool(input("Enter true if citizen, flase otherwise: "))

if(age >= 18):
    if citizen:
        print("You are eligible to vote.")
else:
    print("You are not eligible to vote.")