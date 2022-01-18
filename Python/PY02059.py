import math


def isPrime(num):
    if num < 2:
        return 0
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return 0
    return 1


n, m = map(int, input().split())
maxN = 0
l = []
for i in range(n):
    tmp = [int(j) if isPrime(int(j)) else 0 for j in input().split()]
    l.extend(tmp)
maxN = max(l)  # tim max la prime
if maxN == 0:  # neu khong chua so nguyen to
    print("NOT FOUND")
else:
    print(maxN)
    for k, v in enumerate(l):
        if v == maxN:
            print(f"Vi tri [{k // m}][{k % m}]")  # in cac vi tri == max
