def check(n):
    if n < 2:
        return 'NO'
    for i in range(2, n//2 + 1):
        if n % i == 0:
            return 'NO'
    return 'YES'


for i in range(int(input())):
    n = int(input()[-4::])
    print(check(n))

