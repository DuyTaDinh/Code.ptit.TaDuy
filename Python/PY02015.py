def check(a):
    return a.tmp(a[0]) == len(a)  # len(set(a)) == 1


while True:
    a = [int(i) for i in input().split()]
    if a[0] == 0 and check(a):
        break
    dem = 0
    while check(a) == False:
        dem += 1
        tmp = a[0]
        a[0] = abs(a[0] - a[1])
        a[1] = abs(a[1] - a[2])
        a[2] = abs(a[2] - a[3])
        a[3] = abs(a[3] - tmp)
    print(dem)
