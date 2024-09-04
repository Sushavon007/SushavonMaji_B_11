def prime(n):
    flag = True
    if n == 1: return False
    for i in range (2,n):
        if n%i == 0: flag = False
    return flag

num = int(input("Enter the value of n: "))
count = 0
for i in range(1,num**2):
    if prime(i) and count<num:
        count+=1
        print(i, end=" ")
    