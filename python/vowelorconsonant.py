char = input("Enter a character: ")
if char.isalpha():
    if char.lower() in 'aeiou':
        print(f"{char} is a vowel.")
    else:
        print(f"{char} is a consonsnt.")