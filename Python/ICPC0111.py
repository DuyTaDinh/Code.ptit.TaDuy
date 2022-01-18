# XOAY MẢNG
for _ in range(int(input())):
    n, d = map(int, input().split())
    a = [int(i) for i in input().split()]
    for i in range(d, n):
        print(a[i], end=' ')
    for i in range(d):
        print(a[i], end=' ')
    print()
