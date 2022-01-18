# TÍCH LỚN NHẤT
n = int(input())
a = sorted([int(i) for i in input().split()])
res = []
res.append(a[0] * a[1])
res.append(a[0] * a[1] * a[n - 1])
res.append(a[n - 3] * a[n - 2] * a[n - 1])
res.append(a[n - 2] * a[n - 1])
print(max(res))
