# HOÁN VỊ NGƯỢC
import itertools

for _ in range(int(input())):
    l = []
    for i in range(int(input())):
        l.append(i+1)
    d = list(itertools.permutations(l))
    d.reverse()
    print(len(d))
    for i in d:
        print(*i,sep='',end=' ')
    print()