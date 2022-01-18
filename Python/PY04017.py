# TÍNH VẬN TỐC

l = []
for _ in range(int(input())):
    ten = input().split()
    dv = input().split()
    td = [int(i) for i in input().split(':')]
    so_phut = td[0] * 60 + td[1] - 6 * 60
    ma = ""
    for i in dv:
        ma += i[0]
    for i in ten:
        ma += i[0]
    vt = round(120 * 60 / so_phut)
    tmp = [ma.upper(), ' '.join(ten), ' '.join(dv), vt, "Km/h", so_phut]
    l.append(tmp)
l.sort(key=lambda x: x[5])
for i in l:
    for j in range(5):
        print(i[j], end=' ')
    print()
