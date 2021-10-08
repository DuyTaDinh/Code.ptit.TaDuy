import re

l = []
for _ in [0] * int(input()):
    a = re.findall(r'[0-9]+', input())
    for i in a:
        l.append(int(i))
l.sort()
for i in l:
    print(i)

