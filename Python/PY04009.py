class Sophuc(complex):

    def __init__(self, a):
        super().__init__()

    def __str__(self):
        if ('-' in str(self.imag)):
            return ('%i - %ii' % (self.real, -self.imag))
        return ('%i + %ii' % (self.real, self.imag))


for x in range(int(input())):
    s = [int(i) for i in input().split()]
    a = Sophuc(complex(s[0], s[1]))
    b = Sophuc(complex(s[2], s[3]))
    c = Sophuc((a + b) * a)
    d = Sophuc((a + b) ** 2)
    print(str(c) + ', ' + str(d))
