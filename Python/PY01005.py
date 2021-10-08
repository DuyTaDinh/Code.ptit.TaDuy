s = input()
dem = 0
n = len(s)
for i in range(n):
    if s[i] == '4' or s[i] == '7':
        dem+=1
if dem == 4 or dem == 7:
    print("YES")
else:
    print("NO")