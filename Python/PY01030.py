import math

a = input().split()
n = int(a[0])
k = int(a[1])
l = []
for i in range(10 ** (k-1), 10 ** k):
    if math.gcd(n, i) == 1:
        l.append(i)
dem = 0
for i in l:
    if dem == 9:
        dem = 0
        print(i,end='\n')
    else:
        dem+=1
        print(i,end=' ')