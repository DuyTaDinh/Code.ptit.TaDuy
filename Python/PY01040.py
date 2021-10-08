def rChar(ch, step):
    return chr((ord(ch) - 65 + step) % 26 + 65)


def r(s):
    tmp = sum(ord(i) - 65 for i in s)
    return ''.join(rChar(i, tmp) for i in s)


def merge(s1, s2):
    return ''.join(rChar(v, ord(s2[i]) - 65) for i, v in enumerate(s1))


for _ in [0] * int(input()):
    s = input()
    n = len(s) // 2
    print(merge(r(s[:n]), r(s[n:])))
