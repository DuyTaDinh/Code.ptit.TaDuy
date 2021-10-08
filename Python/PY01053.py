for i in range(int(input())):
    n = input()
    Sum = 0
    for i in range(len(n)):
        Sum += int(n[i])
    if Sum % 3 == 0:
        print("YES")
    else:
        print("NO")
