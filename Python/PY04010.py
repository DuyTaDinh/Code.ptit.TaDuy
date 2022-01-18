class Student:
    def __init__(self, name, ns, mon1, mon2, mon3):
        self.name = name
        self.ns = ns
        self.mon1 = mon1
        self.mon2 = mon2
        self.mon3 = mon3
        self.tong_diem = mon1 + mon2 + mon3

    def display(self):
        print(self.name, self.ns, '{:.1f}'.format(self.tong_diem))


s = Student(input(), input(), float(input()), float(input()), float(input()))
s.display()
