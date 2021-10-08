while 1:
    n = int(input())
    if n ==0: break
    dem = 1
    while n != 1:
        if n%2 == 0:
            n = n/2
            dem +=1
        else:
            n = n*3 +1
            dem +=1
    print(dem)
