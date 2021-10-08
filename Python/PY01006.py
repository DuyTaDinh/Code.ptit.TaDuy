t = int(input())
while t:
    s = input()
    check = False
    for i in range(len(s)):
        if s[i] != '4' and s[i] != '7':
            check = True
            break
    if check == False:
        print("YES")
    else:
        print("NO")
    t -= 1
