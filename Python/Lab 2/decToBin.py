def decToBin(n):
    if n>1:
        decToBin(n//2)
    print(n%2,end='')

dec = int(input("Enter a number in Decimal: "))
print("The number in Binary: ")
decToBin(dec)
