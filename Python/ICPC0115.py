def fact(n):
    return 1 if (n == 0 or n == 1) else n * fact(n - 1)


for _ in range(int(input())):
    n = input()
    sum = 0
    for i in n:
        sum += fact(int(i))
    print("Yes" if sum == int(n) else "No")
