def factorial(n):
    fac = 1
    for i in range(1, n + 1):
        fac = fac*i
    
    return fac

t = int(input())

count = 0
while count < t:
    r = int(input()), n = int(input())

    fact = factorial(n)
    fact1 = factorial(n-1)
    
    copies = fact/fact1