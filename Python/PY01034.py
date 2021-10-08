def preNum(a, n):
    idx = -1
    for i in range(n - 2, 0, -1):
        if int(a[i]) > int(a[i + 1]):
            idx = i
            break
    if idx == -1:
        return '-1'
    tmp = -1
    for i in range(n - 1, idx, -1):
        if tmp == -1 and int(a[i]) < int(a[idx]):
            tmp = i
        elif int(a[i]) >= int(a[tmp]) and int(a[i]) < int(a[idx]):
            tmp = i
    a[idx], a[tmp] = a[tmp], a[idx]
    if a[0] == '0': return '-1'
    return ''.join(a)


for t in range(int(input())):
    n = input()
    ans = preNum(list(n), len(n))
    print(ans)
