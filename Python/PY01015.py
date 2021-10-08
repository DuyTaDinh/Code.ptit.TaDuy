test = int(input())
while test:
    s = input()
    check = True
    for i in range(0, len(s) - 1):
        if (s[i + 1] < s[i]):
            print("NO")
            check  = False
            break
    if check:
        print("YES")
    test -= 1

