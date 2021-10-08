def check(l):
    if len(l) % 2 == 0 or l[0] == l[1]:
        return True
    tmp = l[0]
    for i in range(2,len(l),2):
        if l[i] != tmp:
            return True
    return False

for t in range(int(input())):
    l = list(input())
    if check(l):
        print("NO")
    else:
        print("YES")

