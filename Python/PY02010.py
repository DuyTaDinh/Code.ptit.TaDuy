while 1:
    n = int(input())
    if n == 0: break
    maxN = 0
    minN = 1e99
    for i in range(n):
        tmp = int(input())
        if tmp > maxN: maxN = tmp
        if tmp < minN: minN = tmp
    if minN == maxN:
        print("BANG NHAU")
    else:
        print(minN, maxN)
