def solve(n):
    for i in n:
        if i not in ['0', '1', '2']:
            return 'NO'
    return 'YES'


for i in range(int(input())):
    print(solve(input()))
