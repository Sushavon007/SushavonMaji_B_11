n = 4
for i in range(0,n+1):
    for j in range(n-i):
        print(' ', end=" ")

    for k in range(i,1,-1):
        print(k, end=" ")

    for l in range(1,i+1):
        print(l, end=" ")
    print("")