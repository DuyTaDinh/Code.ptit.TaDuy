res = []
for i in range(int(input())):
    lis = []
    if i + 1 < 10:
        id = "HS0" + str(i + 1)
    else:
        id = "HS" + str(i + 1)
    lis.append(id)
    lis.append(input())
    diem = [float(i) for i in input().split()]
    count = 0
    tongDiem = 0
    for x in diem:
        if count < 2:
            tongDiem += x * 2
        else:
            tongDiem += x
        count += 1
    av = round(tongDiem/10/1.2, 1)
    lis.append(av)
    if av >= 9:
        lis.append("XUAT SAC")
    elif 8 <= av:
        lis.append("GIOI")
    elif 7 <= av:
        lis.append("KHA")
    elif 5 <= av:
        lis.append("TB")
    else:
        lis.append("YEU")
    res.append(lis)
res = sorted(res, key=lambda x: x[2], reverse=True)

for i in res:
    for j in i:
        print(j, end=' ')
    print()