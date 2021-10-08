import re
from collections import Counter

n, k = map(int, input().split())
s = ""
for _ in range(n):
    s += input() + " "
myList = sorted(re.findall("\w+", s.lower()))
for key, value in sorted(Counter(myList).items(), key=lambda i: i[1], reverse=True):
    if value >= k:
        print(key, value)
