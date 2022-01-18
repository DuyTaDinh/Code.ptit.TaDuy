t = int(input())
while t:
    s = list(input())
    m = 0
    n = len(s)
    for i in range(0, n - 1):
        if int(s[n - i - 1]) + m >= 5:
            m = 1
        else:
            m = 0
        s[n - i - 1] = '0'
    s[0] = str(int(s[0]) + m)
    print("".join(s))
    t -= 1
