first_term = 2
common_ratio = 3
num_terms = 6

for i in range(num_terms):
    term = first_term * (common_ratio ** i)
    print(term, end=" ")