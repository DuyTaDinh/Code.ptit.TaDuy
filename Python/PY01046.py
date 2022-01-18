# THÁP HÀ NỘI
def towerOfHN(n, A, B, C):
    if n == 0:
        return
    towerOfHN(n - 1, A, C, B)
    print(A, '->', C)
    towerOfHN(n - 1, B, A, C)


n = int(input())
towerOfHN(n, 'A', 'B', 'C')
print()
