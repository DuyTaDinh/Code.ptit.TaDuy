import math


class PhanSo:
    def __init__(self, tu, mau):
        self.tu = tu
        self.mau = mau

    def display(self):
        self.rutgon()
        print(self.tu + "/" + self.mau)

    def rutgon(self):
        gcd = math.gcd(self.tu, self.mau)
        self.tu = str(int(self.tu / gcd))
        self.mau = str(int(self.mau / gcd))


tu, mau = map(int,input().split())
a = PhanSo(tu, mau)
a.display()
