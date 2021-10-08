def pri(n):
    if n<2: return 0
    for i in range(2,n//2 +1):
        if n%i == 0:
            return 0
    return 1

for t in range(int(input())):
    n = input()
    l = int(len(n))
    dem = 0
    for i in n:
        tmp = int(i)
        if pri(tmp):
            dem +=1
    if pri(l) and dem > l//2:
        print("YES")
    else:
        print("NO")

