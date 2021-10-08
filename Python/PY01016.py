t = int(input())
while t:
    s = input()
    n = len(s)
    sf = ""
    for i in range(n):
        if s[i].isnumeric():
            sf += str(s[i-1])*int(s[i])
    print(sf)
    t-=1