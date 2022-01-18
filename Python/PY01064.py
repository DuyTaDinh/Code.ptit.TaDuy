# KÝ TỰ THỨ K
import math


def solve(n, k):
    x = math.pow(2, n - 1)  # vi tri chinh giua
    if k == x:
        return chr(ord('A') + n - 1)
    elif k < x:
        return solve(n - 1, k)
    else:
        return solve(n - 1, k - x)
    return 'A'


for _ in range(int(input())):
    n, k = map(int, input().split())
    print(solve(n, k))
