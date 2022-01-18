def check(a, b):
    for i in range(len(a)):
        if a[i] > b[i]:
            return False
    return True


for i in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    a.sort()
    b.sort()
    print('YES' if check(a, b) else 'NO')

