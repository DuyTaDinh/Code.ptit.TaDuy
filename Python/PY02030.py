from math import isqrt


def isPrime(n):
    if n < 2: return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True

def solve(n, a):
    b = []
    for i in a:
        if i not in b:
            b.append(i)
    for i in range(n):
        if isPrime(sum(b[:i + 1])) and isPrime(sum(b[i + 1:])):
            return i
    return "NOT FOUND"


n = int(input())
a = [int(i) for i in input().split()]
print(solve(n, a))
