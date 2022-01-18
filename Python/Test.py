'''
tu dien
4
a 9a
b 5a
c abc
d 1a

10 3
Hung 6
Long 7
Giang 8
Linh 5
Tuan 8
Hoa 9
Mai 5
Ngoc 4
Khanh 9
Ngan 10

105.96 10.21
107.17 16.79

hom nay thi lap trinh python
Lap trinh Python.

qwertyuiop
'''

def change(s):
    tmp=[int(i) for i in s.split(':')]
    return tmp[0]*60+tmp[1]
class Infor:
    def __init__(self,id,ten,bd,kt,mua):
        self.id = 'T'+'{:02d}'.format(id)
        self.ten = ten
        self.bd = bd
        self.kt = kt
        self.mua = mua
        self.tgian = change(kt)- change(bd)
    def setTG(self,x,y):
        self.tgian+=(change(y)-change(x))
    def setMua(self,x):
        self.mua+=x
    def toString(self):
        return self.id+" "+self.ten+" "+'{:.2f}'.format(self.mua/self.tgian*60)
a=[]
v=1
t=int(input())
while t>0:
    s,ok= input(),0
    for i in a:
        if i.ten ==s:
            i.setTG(input(),input())
            i.setMua(int(input()))
            ok=1
            break
    if ok==0:
        a.append(Infor(v,s,input(),input(),int(input())))
        v+=1
    t-=1
for i in a:
    print(i.toString())
