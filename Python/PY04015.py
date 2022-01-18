l = []
for t in range(int(input())):
    tmp = []
    ma = f"KH{'%02d' % (t + 1)}"
    tmp.append(ma)
    tmp.append(input())
    sokhoi = abs(int(input()) - int(input()))
    tien = 0
    if sokhoi <= 50:
        tien = round(100 * sokhoi * 1.02)
    elif sokhoi <= 100:
        tien = round((50 * 100 + (sokhoi - 50) * 150) * 1.03)
    else:
        tien = round((50 * 100 + 50 * 150 + (sokhoi - 100) * 200) * 1.05)
    tmp.append(tien)
    l.append(tmp)
l.sort(key=lambda x: (-x[2], x[0]))
for i in l:
    print(*i)
