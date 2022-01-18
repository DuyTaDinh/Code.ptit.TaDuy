def is_prime(n):
    if n == 2:
        return 1
    if n < 2 or n % 2 == 0:
        return 0
    i = 3
    while i * i <= n:
        if n % i == 0:
            return 0
        i += 2
    return 1


def perfect_prime(n):
    if not is_prime(n):
        return 0
    n = str(n)
    if not is_prime(int(n[::-1])):
        return 0
    if not is_prime(sum(map(int, n))):
        return 0
    for i in n:
        if not is_prime(int(i)):
            return 0
    return 1


for i in range(int(input())):
    if perfect_prime(int(input())):
        print("Yes")
    else:
        print("No")
