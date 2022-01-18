def solve(n):
    for i in range(1000):
        if int(n) % 7 == 0:
            return n
        n = str(int(n) + int(n[::-1]))
    return -1


for i in range(int(input())):
    print(solve(input()))
