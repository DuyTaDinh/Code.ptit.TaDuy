class Gamer:
    def __init__(self, id, name, vao, ra):
        self.id = id
        self.name = name
        self.vao = vao
        self.ra = ra
        self.getTime()

    def getTime(self):
        vao = self.vao.split(":")
        ra = self.ra.split(":")
        h = int(ra[0]) - int(vao[0])
        m = int(ra[1]) - int(vao[1])
        if m < 0:
            m += 60
            h -= 1
        self.h = h
        self.m = m
        return str(h) + ' gio ' + str(m) + ' phut'

    def __str__(self):
        return self.id + ' ' + self.name + ' ' + self.getTime()


gamerList = []
for i in range(int(input())):
    x = Gamer(input(), input(), input(), input())
    gamerList.append(x)

gamerList.sort(key=lambda x: (x.h, x.m), reverse=True)
for i in gamerList:
    print(i)
