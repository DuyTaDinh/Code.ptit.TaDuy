# TÍNH TOÁN LƯỢNG MƯA
def change(s):
    tmp = [int(i) for i in s.split(':')]
    return tmp[0] * 60 + tmp[1]


class LuongMua:
    def __init__(self, id, ten, bd, kt, mua):
        self.id = 'T' + '%02d' % id
        self.ten = ten
        self.bd = bd
        self.kt = kt
        self.mua = mua
        self.tgian = change(kt) - change(bd)

    def setTG(self, x, y):
        self.tgian += (change(y) - change(x))

    def setMua(self, x):
        self.mua += x

    def toString(self):
        return self.id + " " + self.ten + " " + '{:.2f}'.format(self.mua / self.tgian * 60)


l = []
dem = 1
for _ in range(int(input())):
    ten = input()
    ok = 0
    for i in l:
        if i.ten == ten:
            i.setTG(input(), input())
            i.setMua(int(input()))
            ok = 1
            break
    if ok == 0:
        l.append(LuongMua(dem, ten, input(), input(), int(input())))
        dem += 1
for i in l:
    print(i.toString())
