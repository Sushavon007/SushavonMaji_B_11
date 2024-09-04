import math

num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

gcd = math.gcd(num1, num2)
print("GCD of {0} & {1} is: {2}".format(num1,num2,gcd))