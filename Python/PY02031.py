def eratosthenes(n,a):
    tmp = []
    for i in range(2, n+1):
        if i not in tmp:
            a.append(i)
            for j in range(i*i, n+1, i):
                tmp.append(j)

a = []
eratosthenes(1000,a)

inp = input().split()
for i in range(int(inp[0])):
    temp = [int(x) for x in input().split()]
    for j in temp:
        if j in a:
            print(1,end=' ')
        else:
            print(0,end=' ')
    print()
