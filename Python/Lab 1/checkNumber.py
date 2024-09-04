def checkPerfect(n):
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            sum += i
    if sum == n:
        print(n, "is a Perfect number")

def checkArmstrong(n):
    sum,temp = 0,n
    pow = len(str(n))
    while temp > 0:
        digit = temp % 10
        sum += digit ** pow
        temp //= 10
    if sum == n:
        print(n, "is an Armstrong number")


num = int(input("Enter a number: "))
checkPerfect(num)
checkArmstrong(num)