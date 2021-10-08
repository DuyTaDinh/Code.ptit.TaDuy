# N = a + (a+1) + (a+2) + .. + (a+L)
# => N = (L+1)*a + (L*(L+1))/2
# => a = (N- L*(L+1)/2)/(L+1)

for _ in [0] * int(input()):
    N = int(input())
    L, res = 1, 0
    while L * (L + 1) / 2 < N:
        if (N - L * (L + 1) / 2) % (L + 1) == 0: res += 1
        L += 1
    print(res)