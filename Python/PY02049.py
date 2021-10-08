for _ in [0]*int(input()):
    n , p = map(int,input().split())
    x, res = 1,0
    while n/ (p**x) > 1:
        res += int(n / (p**x))
        x+=1
    print(res)