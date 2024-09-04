def prime(n):
    if n == 1: return True
    for i in range (2,n):
        if n%i == 0: return True
    return False

num = int(input("Enter a number: "))
result = "is not a Prime number" if prime(num) else "is a Prime number"
print(num, result)