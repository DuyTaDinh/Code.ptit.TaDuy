def bas(number, base):  # searh base_repr in numpy
    digits = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    num = abs(number)
    res = []
    while num:
        res.append(digits[num % base])
        num //= base
    return ''.join(res[::-1])


for t in range(int(input())):
    a = [int(i) for i in input().split()]
    print(bas(a[0], base=a[1]))
