for i in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    a = set(a)
    print(max(a) - min(a) + 1 - len(a)) 

