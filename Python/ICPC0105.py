import re

for _ in range(int(input())):
    s = input()
    d = re.findall("\d+",s)
    d = [int(i) for i in d]
    print(max(d))