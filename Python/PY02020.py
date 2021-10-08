n = int(input())
a = [float(i) for i in input().split()]
a.sort()
i = 0
while a[i] == a[i+1]:
    del a[i]
del a[0]
i = -1
while a[i] == a[i-1]:
    a.pop()
a.pop()
n = len(a)
res = sum(a)/n
print(f"{res:.2f}")