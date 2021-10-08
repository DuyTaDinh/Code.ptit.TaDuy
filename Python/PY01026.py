for t in range(int(input())):
    s1 = input()
    s2 = input()
    s1 = sorted(s1)
    s2 = sorted(s2)
    if s1 == s2:
        print(f'Test {t+1}: YES')
    else:
        print(f'Test {t+1}: NO')
