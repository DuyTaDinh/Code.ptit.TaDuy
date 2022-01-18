import math


class PhanSo:
    def __init__(self, tu=None, mau=None):
        self.tu = tu
        self.mau = mau

    def display(self):
        self.rut_gon()
        print(str(self.tu) + "/" + str(self.mau))

    def rut_gon(self):
        gcd = math.gcd(self.tu, self.mau)
        self.tu = int(self.tu / gcd)
        self.mau = int(self.mau / gcd)

    def tong(self, x):
        self.tu = x.tu * self.mau + self.tu * x.mau
        self.mau = x.mau * self.mau


s = input().split()
p = PhanSo(int(s[0]), int(s[1]))
q = PhanSo(int(s[2]), int(s[3]))
p.tong(q)
p.display()
