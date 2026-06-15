string = input("Enter a string: ").lower()

if string == string[::-1]:
    print("Palindrome")
else:
    print("Not a Palindrome")
