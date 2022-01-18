import itertools

n, k = [int(x) for x in input().split()]
lis = [int(x) for x in input().split()]
lis = list(set(lis))
lis.sort()

l = list(itertools.combinations(lis, k))
l = [list(x) for x in l]
for i in l:
    i = [str(x) for x in i]
    print(*i)

