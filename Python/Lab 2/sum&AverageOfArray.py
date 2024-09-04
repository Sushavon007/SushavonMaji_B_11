numbers = [37, 2, 83, -47, 9]
sum, size = 0, len(numbers)
for i in range(size):
    sum += numbers[i]
avg = sum/size

print(f"Sum: {sum} and Average: {avg}")