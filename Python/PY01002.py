a = input()
num = [int(s) for s in a.split() if s.isdigit()]
# for i in a.split():
#     if i.isdigit():
#         num.append(int(i))
if (num[0] + num[1] == num[2]):
    print("YES")
else:
    print("NO")