# ĐẶT TÊN
import itertools

n, k = map(int, input().split())
d = set([i for i in input().split()])
d = sorted(d)
l = list(itertools.combinations(d,k))
for i in l:
    print(*i)