for i in range(int(input())):
    n = input()
    res = 1
    for i in range(len(n)):
        if n[i] != '0':
            res *= int(n[i])
    print(res)
