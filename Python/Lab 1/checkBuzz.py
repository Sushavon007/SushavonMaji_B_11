def buzz(n):
    if n%10==7 or n%7==0:
        print(n,"is a Buzz number.")
    else:
        print(n,"is not a Buzz number.")

n = int(input("Enter a number: "))
buzz(n)