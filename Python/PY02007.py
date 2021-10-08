test = 10
s = set()
while test > 0:
    data = input()
    base = data.split()
    for i in range(0,len(base)):
        s.add(int(base[i]) % 42)
    test -= len(base)
print(len(s))
