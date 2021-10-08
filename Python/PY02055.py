prime = [True for i in range(1000 + 1)]


def SieveOfPrime():
    prime[0] = prime[1] = False
    for i in range(2, 1000 + 1):
        if prime[i]:
            for j in range(i * i, 1000 + 1, i):
                prime[j] = False


SieveOfPrime()
n, m = map(int, input().split())
a = []
maxV = 0
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
    for j in range(m):
        if prime[a[i][j]] == True:
            if a[i][j] > maxV:
                maxV = a[i][j]

if maxV == 0:
    print("NOT FOUND")
else:
    l = []
    print(maxV)
    for i in range(n):
        for j in range(m):
            if a[i][j] == maxV:
                l.append(f'[{i}][{j}]')
    for i in l:
        print(f"Vi tri {i}")
