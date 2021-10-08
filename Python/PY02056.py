def isTN(n):
    if n < 10: return False
    s = str(n)
    return (True if s == s[::-1] else False)


n, m = map(int, input().split())
a = []
maxV = 0
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
    for j in range(m):
        if isTN(a[i][j]) == True:
            if a[i][j] > maxV:
                maxV = a[i][j]

if maxV == 0:
    print("NOT FOUND")
else:
    print(maxV)
    for i in range(n):
        for j in range(m):
            if a[i][j] == maxV:
                print(f'Vi tri [{i}][{j}]')
