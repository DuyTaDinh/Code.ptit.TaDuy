for t in range(int(input())):
    a = input()
    b = [i for i in a if i.isalpha()]
    b.sort()
    s = sum([int(i) for i in a if i.isnumeric()])
    print(''.join(b), s, sep='', end='\n')
