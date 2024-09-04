s = int(input("Enter the starting: "))
e = int(input("Enter the Ending: "))

for i in range(s,e+1):
    if i % 10 == 0:
        print(i,end=' ')