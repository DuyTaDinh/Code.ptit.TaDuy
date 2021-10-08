import math


def prime(n):
    if n < 2: return 0
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            return 0
    return 1


for t in range(int(input())):
    a = [int(i) for i in input().split()]
    b = math.gcd(a[0], a[1])
    c = 0
    while b:
        c += b % 10
        b //= 10
    if prime(c):
        print("YES")
    else:
        print("NO")
