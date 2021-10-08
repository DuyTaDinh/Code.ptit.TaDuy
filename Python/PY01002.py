a = input()
num = [int(s) for s in a.split() if s.isdigit()]
if (num[0] + num[1] == num[2]):
    print("YES")
else:
    print("NO")

