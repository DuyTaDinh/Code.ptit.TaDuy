def check(n):
    if n < 2:
        return True
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            return True
    return False


for t in range(int(input())):
    s = input()
    n = int(s[-4:])
    if check(n):
        print("NO")
    else:
        print("YES")
