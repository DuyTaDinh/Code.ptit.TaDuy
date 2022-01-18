n = int(input())
d = []
while len(d) < n:
    tmp = [int(i) for i in input().split()]
    d.extend(tmp)
check, j = 0, 0
ma = max(d)
for i in range(1, ma):
    if d[j] == i:
        j += 1
    else:
        check = 1
        print(i)
if check == 0:
    print("Excellent!")