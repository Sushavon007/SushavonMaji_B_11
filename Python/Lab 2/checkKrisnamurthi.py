import math

num = int(input("Enter a number: "))
temp = num
sum = 0
while temp > 0:
    rem = temp%10
    sum = sum + math.factorial(rem)
    temp = temp // 10
if num==sum:
    print(num,"is a Krisnamurthi number")
else:
    print(num,"is not a Krisnamurthi number")