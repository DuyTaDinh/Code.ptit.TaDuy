import math

t = int(input())
lis = [int(i) for i in input().split()]
lis.sort()
for i in range(len(lis) - 1):
    for j in range(i + 1, len(lis)):
        if math.gcd(lis[i], lis[j]) == 1:
            print(lis[i], lis[j])

