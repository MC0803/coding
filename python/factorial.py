def factorial(number):
     if number ==0 | number ==1 :
          return 1
     else:
          return number * factorial(number-1)
     
number  = int(input("Enter number to find factorial of"))     
print(f"Factorial of {number} is {factorial(number)}")