t = int(input())
n = t
arr = {}
while t > 1:
    x, y = map(int, input().split())
    if x in arr:
        arr[x] += 1
    else:
        arr[x] = 1
    if y in arr:
        arr[y] += 1
    else:
        arr[y] = 1
    t -= 1
ok = 0
for i in arr:
    if arr[i] == n - 1:
        print("Yes")
        ok = 1
        break
if ok == 0:
    print("No")
