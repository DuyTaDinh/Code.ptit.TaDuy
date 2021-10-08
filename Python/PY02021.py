for _ in [0] * int(input()):
    a = input()
    l1 = [int(i) for i in input().split()]
    l2 = [int(i) for i in input().split()]
    l3 = [int(i) for i in input().split()]
    i1, i2, i3, check = 0, 0, 0, 0
    while i1 < len(l1) and i2 < len(l2) and i3 < len(l3):
        if l1[i1] == l2[i2] == l3[i3]:
            print(l1[i1], end=' ')
            check = 1
            i1, i2, i3 = i1 + 1, i2 + 1, i3 + 1
        elif l1[i1] < l2[i2]:
            i1 += 1
        elif l2[i2] < l3[i3]:
            i2 += 1
        else:
            i3 += 1
    if check == 0:
        print("NO")
    print()
