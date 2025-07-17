character = input("Enter a character")
if character.isalpha():
    if character.isupper():
        print("Uppercase letter")
    else:
        print("Lowercase letter")
elif character.isdigit():
    print("Digit")
elif character.isspace():
    print("Whitespace character")    
else:
    print("Special character")
