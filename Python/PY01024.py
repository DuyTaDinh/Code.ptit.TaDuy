def check1(n):
    Sum = 0
    for i in range(len(n)):
        Sum += int(n[i])
    if Sum % 10 == 0:
        return 1
    else:
        return 0


def check2(n):
    for i in range(len(n) - 1):
        if int(n[i]) + 2 != int(n[i + 1]) and int(n[i]) - 2 != int(n[i + 1]):
            return 0
    return 1


for i in range(int(input())):
    n = input()
    if check1(n) and check2(n):
        print("YES")
    else:
        print("NO")
