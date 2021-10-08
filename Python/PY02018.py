n = int(input())
l = [int(x) for x in input().split()]
check = False
for i in range(1, n+1):
    if i not in l:
        print(i)
        check = True
        break
if check == False:
    print(n + 1)
