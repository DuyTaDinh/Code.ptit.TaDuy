def prime(n):
    if n < 2: return 0
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            return 0
    return 1


n = int(input())
l = [int(i) for i in input().split()]
a = []
for i in l:
    if prime(i) and i not in a:
        a.append(i)
        print(i, l.count(i), sep=' ')

