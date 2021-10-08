t = int(input())
while t:
    s1 = input()
    s2 = s1[::-1]
    n = len(s1)
    check = False
    for i in range(1, n):
        d1 = abs(ord(s1[i]) - ord(s1[i - 1]))
        d2 = abs(ord(s2[i]) - ord(s2[i - 1]))
        if d1 != d2:
            check = True
            print("NO")
            break
    if check == False:
        print("YES")
    t -= 1
