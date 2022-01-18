for _ in range(int(input())):
    n, m = map(int, input().split())
    a = [int(x) for x in input().split()]
    maxN = max(a)
    for i in range(0, n):
        if a[i] == maxN: # chen vao truoc max
            a.insert(i, m)
            break
    for i in a:   # in so < 0 truoc
        if i < 0:
            print(i, end=" ")
    for i in a:
        if i >= 0:
            print(i, end=" ")
    print()
