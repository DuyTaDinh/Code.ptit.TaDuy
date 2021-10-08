def pri(n):
    if n<2: return 0
    for i in range(2,n//2 +1):
        if n%i == 0:
            return 0
    return 1

for t in range(int(input())):
    n = input()
    dau = int(n[:3])
    cuoi = int(n[-3:])
    if pri(dau) and pri(cuoi):
        print("YES")
    else:
        print("NO")

