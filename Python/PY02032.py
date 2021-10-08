s = input()
l = []
for i in range(0, len(s) - 1, 2):
    l.append(int(s[i] + s[i + 1]))
l = sorted(set(l))
for i in l:
    print(i, end=' ')
