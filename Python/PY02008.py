def prime(n):
    if n < 2: return False
    for i in range(2, (n // 2) + 1):
        if n % i == 0:
            return False
    return True


a = input().split()
n = int(a[0])
x = int(a[1])
dem = 0
i = 2

print(x, end=' ')
while dem < n:
    if prime(i):
        x += i
        print(x, end=' ')
        dem += 1
    i += 1
