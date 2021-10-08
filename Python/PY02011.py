n = int(input())
a = [int(i) for i in input().split()]
step, num = sum(abs(x - a[0]) for x in a), a[0]
for i in range(n):
    if a[i] != num:
        tmp = sum(abs(x - a[i]) for x in a)
        if step > tmp:
            step = tmp
            num = a[i]
print(step, num)
