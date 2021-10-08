for t in range(int(input())):
    n = int(input())
    a = input().split()
    b = input().split()
    a = [int(i) for i in a]
    b = [int(i) for i in b]
    a.sort()
    b.sort()
    check = False
    for i in range(n):
        if a[i] > b[i]:
            check = True
            break
    if check == False:
        print("YES")
    else:
        print("NO")