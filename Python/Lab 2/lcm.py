import math

num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

lcm = math.lcm(num1, num2)
print("LCM of {0} & {1} is: {2}".format(num1,num2,lcm))