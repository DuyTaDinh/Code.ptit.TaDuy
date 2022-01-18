def check(a):
    if len(a) != 4: return False
    for i in a:
        if not str(i).isnumeric(): return False
        if int(i) > 255 or int(i) < 0: return False
    return True


for i in range(int(input())):
    a = [i for i in input().split('.')]
    print("YES" if check(a) else "NO")
