l = []
for _ in range(int(input())):
    tmp = [input(),input(),input()]
    l.append(tmp)
l.sort(key= lambda x: x[0])
for i in l:
    print(*i)