s = input().split()
a = int(s[0])
k = int(s[1])
n = int(s[2])
ds = []
dau = (a // k + 1) * k - a
cuoi = (n // k + 1) * k - a
if cuoi-dau < k:
    print("-1")
else:
    for i in range(dau, cuoi, k):
        print(str(i),end=' ')

