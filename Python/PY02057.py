n, m = map(int, input().split())
a = []
maxV = 0
minV = 10000
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
    for j in range(m):
        if a[i][j] > maxV:
                maxV = a[i][j]
        if a[i][j] < minV:
                minV = a[i][j]
res = maxV - minV
l = []
check = False
for i in range(n):
    for j in range(m):
        if a[i][j] == res:
            l.append(f'Vi tri [{i}][{j}]')
            check = True
if check == False:
    print("NOT FOUND")
else:
    print(res)
    for i in l:
        print(i)
