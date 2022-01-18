def solve(n):
    if len(n) < 3:
        return 'NO'
    pos = 0
    for i in range(len(n) - 1):
        if n[i] == n[i + 1]:
            return 'NO'
        if n[i] > n[i + 1]:
            pos = i
            break
    if pos == 0:
        return 'NO'
    for i in range(pos, len(n) - 1):
        if n[i] < n[i + 1]:
            return 'NO'
    return 'YES'


for _ in range(int(input())):
    print(solve(input()))
