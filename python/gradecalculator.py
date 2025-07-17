number = int(input("Enter marks of student:"))
if(number <0 or number >100):
        print("Invalid entry")
if number>= 90:
         print("Grade  A")
elif number >= 75:
        print("grade B")
elif number >=50:
        print("Grade C")
else :
        print("FAIL")                