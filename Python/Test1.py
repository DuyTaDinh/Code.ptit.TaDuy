# 1: Class khong tham so + 3 phuong thuc init, getitem, str
import math


class Person:
    def __init__(self):
        self.infor = {
            'name': 'ta duy',
            'country': 'Viet Nam',
            'number': 123456789
        }

    def __getitem__(self, item):
        return self.infor[item]

    def __str__(self):
        return "{} - {} - {}".format(self.infor['name'], self.infor['country'], self.infor['number'])


# p1 = Person()
# print(p1['name'])  # ta duy
# print(p1['number'])  # 123456789
# print(p1)  # ta duy - Viet Nam - 123456789

# 2: Class co tham so
class PhanSo:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def rut_gon(self):
        tmp = math.gcd(self.x, self.y)
        self.x = self.x / tmp
        self.y = self.y / tmp

    def __str__(self):
        return "{}/{}".format(int(self.x), int(self.y))


# p1 = PhanSo(3, 15)
# print(p1)  # 3/15
# p1.rut_gon()
# print(p1)  # 1/5

# 3: Truyen object vao trong 1 class
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distance(self, p2):
        dis = math.sqrt((self.x - p2.x) ** 2 + (self.y - p2.y) ** 2)
        return "%.4f" % dis

    def __str__(self):
        return "{}:{}".format(int(self.x), int(self.y))


# p1 = Point(1, 5)
# p2 = Point(0, 4)
# print(p1)  # 3/15
# print(p1.distance(p2))

# 4: Viet ket qua tra ve object
def object(tuso, mauso):
    return SoPhuc(tuso, mauso)


class PS:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def rut_gon(self):
        tmp = math.gcd(self.x, self.y)
        self.x = self.x / tmp
        self.y = self.y / tmp

    def add(self, p2):
        mau = self.y * p2.y
        tu = self.x * p2.y + self.y * p2.x
        return object(tu, mau)

    def __str__(self):
        return "{}/{}".format(int(self.x), int(self.y))


# p1 = PS(1, 3)
# p2 = PS(1, 4)
# res = p1.add(p2)
# res.rut_gon()
# print(res)  # 7/12

# 5: Viet ham tinh toan 2 doi tuong
class SoPhuc:
    def __init__(self, thuc, ao):
        self.thuc = thuc
        self.ao = ao

    def __str__(self):
        if self.ao > 0:
            return "{} + {}i".format(self.thuc, self.ao)
        return "{} - {}i".format(self.thuc, abs(self.ao))


def add(sp1: SoPhuc, sp2: SoPhuc):
    a = sp1.thuc + sp2.thuc
    b = sp1.ao + sp2.ao
    return SoPhuc(a, b)


def mul(sp1: SoPhuc, sp2: SoPhuc):
    a = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao
    b = sp1.ao * sp2.thuc + sp1.thuc * sp2.ao
    return SoPhuc(a, b)


sp1 = SoPhuc(1, 2)
sp2 = SoPhuc(3, -4)
sp3 = add(sp1, sp2)
sp4 = mul(sp1, sp2)
print(sp3, ", ", sp4, sep="")  # 4 - 2i, 11 + 2i
