n = input()
while len(n) > 1:
    tmp = len(n)//2
    s1 = int(n[:tmp])
    s2 = int(n[tmp:])
    n = n.replace(n,str(s1+s2))
    print(n)
