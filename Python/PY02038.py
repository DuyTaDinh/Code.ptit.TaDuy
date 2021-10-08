from math import comb

n = int(input())
a = []
for i in range(n):
    j = list(input())
    a.append(j)
dem = 0
for i in range(n):
    tmp = a[i].count('C')
    dem += comb(tmp, 2)
for i in range(n):
    tmp = 0
    for j in range(n):
        if a[j][i] == 'C': tmp += 1
    dem += comb(tmp, 2)
print(dem)
