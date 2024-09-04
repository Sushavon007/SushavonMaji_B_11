percentage = float(input("Enter your percentage: "))
if percentage >= 90: grade='A'
elif percentage >= 80: grade='B'
elif percentage >= 70: grade='C'
elif percentage >= 60: grade='D'
elif percentage >= 40: grade='E'
else: grade='F'
print("Your grade is:", grade)