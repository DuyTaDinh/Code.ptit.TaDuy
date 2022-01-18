for _ in range(int(input())):
    n,m = map(int, input().split())
    a = [[int(j) for j in input().split()] for i in range(n)]
    a1 = [[0]*n for i in range(m)]
    res = [[0]* n for i in range(n)]
    for i in range(n):
        for j in range(m):
            a1[j][i] = a[i][j]
    for i in range(n):
        for j in range(n):
            for k in range(m):
                res[i][j] += a[i][k]*a1[k][j]
    for i in range(n):
        print(*res[i])


