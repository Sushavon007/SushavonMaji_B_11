num1 = int(input("Enter num1: "))
num2 = int(input("Enter num2: "))
num3 = int(input("Enter num3: "))

if num1 > num2 and num1 > num3:
    print("The largest number is: ", num1)
elif num2 > num1 and num2 > num3:
    print("The largest number is: ", num2)
elif num3 > num1 and num3 > num2:
    print("The largest number is: ", num3)
