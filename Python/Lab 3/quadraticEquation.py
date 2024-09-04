import math

def solve_quadratic_eqn(a, b, c):
    discriminant = b**2 - 4*a*c
    
    if discriminant > 0:
        root1 = (-b + math.sqrt(discriminant)) / (2*a)
        root2 = (-b - math.sqrt(discriminant)) / (2*a)
        return (root1, root2)
    
    elif discriminant == 0:
        root = -b / (2*a)
        return (root,)
    
    else:
        return ()

print("Solution:",solve_quadratic_eqn(1, -3, 2))
