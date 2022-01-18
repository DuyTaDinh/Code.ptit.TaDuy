def bas(num, base):
    s = '0123456789ABCDEF'
    t = ''
    while num:
        t += s[num % base]
        num //= base
    return t[::-1]


for i in range(int(input())):
    b = int(input())
    n = int(input(), 2)
    print(bas(n, b))
