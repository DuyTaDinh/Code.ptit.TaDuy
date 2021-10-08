n, m = map(int, input().split())
a = []
for _ in range(n):
    a.append([int(i) for i in input().split()])
tmp = 0 if n > m else 1
pos = [i for i in range(tmp, abs(n - m) * 2, 2)]
for i in range(n):
    if (n > m and i not in pos) or n == m:
        print(*a[i])
    elif n < m:
        for j in range(m):
            if j not in pos:
                print(a[i][j], end=' ')
        print()
