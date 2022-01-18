a = input().split()
dai = int(a[0])
rong = int(a[1])
mausac = a[2]
if dai > 0 and rong > 0:
    chuvi = (dai+rong)*2
    dientich = dai*rong
    print(chuvi,dientich,mausac.title())
else:
    print("INVALID")