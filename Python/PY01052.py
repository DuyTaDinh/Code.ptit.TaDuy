def ngto(a):
    if a < 2: return False
    i = 2
    while i * i <= a:
        if a % i == 0: return False
        i += 1
    return True


for t in range(int(input())):
    inp = input()
    s = 0
    for i in inp:
        s += int(i)
    print("YES" if ngto(s) == True else "NO")
