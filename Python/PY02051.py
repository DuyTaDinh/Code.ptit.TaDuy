# a[0] + a[1] = b[0][1]
# a[0] + a[2] = b[0][2]
# a[1] + a[2] = b[1][2]
# => b[0][1]+b[0][2]-b[1][2] = 2*a[0]

n = int(input())
b = []
for _ in range(n):
    b.append([int(i) for i in input().split()])
if n == 2:
    print(*[b[0][1] // 2] * 2)
else:
    a = [(b[0][1] + b[0][2] - b[1][2]) // 2]
    for i in range(1, n):
        a.append(b[0][i] - a[0])
    print(*a)
