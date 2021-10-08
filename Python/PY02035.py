s = input()
k = int(input())
l = []
for i in range(0, len(s) - 1, 2):
    l.append(int(s[i] + s[i + 1]))
a = []
for i in l:
    if i not in a:
        a.append(i)
a.sort()
check = False
for i in a:
    tmp = l.count(i)
    if tmp >= k:
        print(i, tmp)
        check = True
if check == False:
    print("NOT FOUND")
