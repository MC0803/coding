def ispalindrome(str):
    if str == str[::-1]:
     return True
    else:
       return False
    
str = input("Enter string to check for palindrome")
print(ispalindrome(str))