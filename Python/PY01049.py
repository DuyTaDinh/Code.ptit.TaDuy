def is_prime(n):
    if n< 2: return 0
    for i in range(2, n//2 +1):
        if n%i == 0:
            return 0
    return 1

for i in range(int(input())):
    n = input()
    if is_prime(len(n)):
        dem = 0
        for i in range(len(n)):
            if is_prime(int(n[i])):
                dem+=1
        if dem*2 > len(n):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")