import math

n = int(input("Enter the value of n: "))
print("The Series: ")
for i in range(1,n+1):
    print(math.factorial(i),end=" ")