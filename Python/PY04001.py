t = int(input())
while t > 0:
    a = [float(i) for i in input().split()]
    res = ((((a[2] - a[0]) ** 2) + ((a[3] - a[1]) ** 2)) ** 0.5)
    print("{:.4f}".format(res))
    t -= 1
