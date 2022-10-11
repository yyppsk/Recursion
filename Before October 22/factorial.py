def factorial(a):
    if a == 1:
        return 1
    return a * factorial(a-1)
print(factorial(5))

def counting(n):
    if n == 0:
        return 1
    print(n, end=" ")
    return counting(n-1)
counting(5)