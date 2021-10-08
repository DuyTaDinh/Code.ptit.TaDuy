for t in range(int(input())):
    n = int(input())
    l = []
    while n:
        n -= 1
        inp = int(input())
        l.append(inp)
    l.sort()
    dem = 1
    res = l[0]
    for i in range(1, len(l)):
        tmp = 1
        while i < len(l) and l[i] == l[i - 1]:
            tmp += 1
            i += 1
        if (tmp > dem):
            res = l[i - 1]
            dem = tmp
    print(res)
