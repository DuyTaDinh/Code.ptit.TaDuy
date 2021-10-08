for t in range(int(input())):
    n = int(input())
    a = input().split()
    h = n // 2
    d = {}
    for i in range(n):
        if a[i] in d:
            d[a[i]] += 1
        else:
            d[a[i]] = 1
    res = max(d, key=d.get)
    if int(d[res]) > h:
        print(res)
    else:
        print("NO")
