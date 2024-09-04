num = input("Enter a number: ")
revNum = num[::-1]
if num == revNum:
    print(num, "is a palindrome")
else:
    print(num, "is not a palindrome")