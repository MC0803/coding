def is_even(number):
    if number %2 ==0:
        return True
    else:
        return False
    
number = int(input("Enter a number to check"))    
print(f"{number} is {is_even(number)}")