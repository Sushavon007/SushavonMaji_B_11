num = int(input("Enter a number: "))
exp = len(str(num))
temp,sum = num,0

while temp > 0:
    rem = temp % 10
    sum += rem ** exp
    temp //= 10

if num == sum:
    print(num,"is an Armstrong number")
else:
    print(num,"is not an Armstrong number")