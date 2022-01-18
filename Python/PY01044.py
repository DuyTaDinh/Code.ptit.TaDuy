# XỬ LÝ XÂU KÝ TỰ
s1 = [i.lower() for i in input().split()]
s2 = [i.lower() for i in input().split()]
hop = sorted(set(s1+s2))
giao = sorted(set(s1).intersection(s2))
print(*hop)
print(*giao)