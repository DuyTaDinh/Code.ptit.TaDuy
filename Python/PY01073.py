# HOÁN VỊ KÝ TỰ
import itertools

s = [i for i in input()]
l = list(itertools.accumulate)
for i in l:
    print(''.join(i))
