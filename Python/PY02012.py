n = int(input())
l = [int(i) for i in input().split()]
while len(l) != n:
    tmp = [int(i) for i in input().split()]
    l.extend(tmp)
l1 ,l2 = [], []
for i in l:
    l1.append(i) if i%2==0 else l2.append(i)
l1.sort()
l2.sort(reverse=True)
j, k = 0, 0
for i in l:
    if i % 2 == 0:
        print(l1[j], end=' ')
        j += 1
    else:
        print(l2[k], end=' ')
        k += 1
print()
