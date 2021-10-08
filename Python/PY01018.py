P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."
while 1:
    d = input().split()
    k = int(d[0])
    if k == 0: break
    n = list(d[1])
    s = ""
    for i in range(len(n)):
        tmp = P.find(str(n[i]))
        s += str(P[(tmp+k)%28])
    print(s[::-1])
