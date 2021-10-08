n = input()
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
setA = set(a)
setB = set(b)
if setA == setB:
    print("YES")
else:
    print("NO")
