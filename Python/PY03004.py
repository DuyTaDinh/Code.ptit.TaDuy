import re
from collections import Counter

s = ""
for _ in range(int(input())):
    s += (input() + " ")
myList = sorted(re.findall("\w+", s.lower()))  # sort by dictionary
for k, v in sorted(Counter(myList).items(), key=lambda i: i[1], reverse=True):  # sort by occurrence
    print(k, v)
