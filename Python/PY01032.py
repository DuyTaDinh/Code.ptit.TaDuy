def check(num, base):
    tmp = ""
    while num:
        tmp += str(num % base)
        num //= base
    return tmp == tmp[::-1]


def check_bin(n):
    tmp = bin(n)[2:]
    return tmp == tmp[::-1]


a, b, m = map(int, input().split())
res = [i for i in range(a, b + 1) if check_bin(i)]
for base in range(2, m + 1):
    res = [i for i in res if check(i, base)]
    if len(res) == 0:
        break
print(len(res))
'''Test:
1 356 2                 
18 118 13
1 2000000 3
'''
