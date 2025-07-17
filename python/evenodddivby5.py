number = int(input("Enter a number: "))
if(number%2 == 0):
    if(number % 5 ==0):
        print("Even and divisible by 5")
    else:
        print("Even but not divisible by 5")    
elif (number % 5 == 0):
    print("Odd but divisible by 5")
