for t in range(int(input())):
    n = input()
    s = sum(int(n[i]) for i in range(0, len(n), 2))
    mul = 1
    check = False
    for i in range(1, len(n), 2):
        tmp = int(n[i])
        if tmp != 0:
            mul *= tmp
            check = True
    if check == False:
        mul = 0
    print(s, mul)
