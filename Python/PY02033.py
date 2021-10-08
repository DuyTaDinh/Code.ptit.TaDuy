s = input()
l = []
for i in range(0, len(s) - 1, 2):
    l.append(int(s[i] + s[i + 1]))
a = []
for i in l:
    if i not in a:
        a.append(i)
for i in a:
    print(i, end=' ')
