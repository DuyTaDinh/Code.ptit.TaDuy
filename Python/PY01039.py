def solve(n):
    for i in range(len(n)):
        if i % 2 == 0 and n[0] != n[i]:
            return 'NO'
        if i % 2 != 0 and n[1] != n[i]:
            return 'NO'
    return 'YES'


for i in range(int(input())):
    print(solve(input()))
