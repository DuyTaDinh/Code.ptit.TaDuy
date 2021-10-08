for t in range(int(input())):
    n = input()
    s = sum([int(i) for i in n])
    s1 = s;
    s2 = 0;
    while s1:
        tmp = s1 % 10
        s2 = s2 * 10 + tmp
        s1 = s1 // 10
    if s2 == s and s > 10:
        print("YES")
    else:
        print("NO")




