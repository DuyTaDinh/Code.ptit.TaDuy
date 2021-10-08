l = [0, 1]
for i in range(2, 94):
    l.append(l[i - 1] + l[i - 2])
for i in range(int(input())):
    a = input().split()
    mot = int(a[0])
    hai = int(a[1])
    for i in range(mot, hai + 1):
        print(l[i], end=' ')
    print()
