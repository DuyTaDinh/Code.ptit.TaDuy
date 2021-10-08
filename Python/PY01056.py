def ngto(a):
    if a < 2: return False
    for i in range(2,a // 2 + 1):
        if a%i == 0:
            return False
    return True


for t in range(int(input())):
    n = input()
    check = False
    s = 0
    for i in range(len(n)):
        if (i % 2 == 0 and int(n[i]) % 2 != 0) or (i % 2 == 1 and int(n[i]) % 2 == 0):
            print("NO")
            check = True
            break;
        s += int(n[i])
    if ngto(s) == False and check == False:
        print("NO")
        check = True
    if check == False:
        print("YES")
