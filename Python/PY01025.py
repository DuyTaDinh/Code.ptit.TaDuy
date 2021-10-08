s = input()
i = len(s) - 1
res = ""
dem = 0
while 1:
    dem += 1
    res = s[i] + res
    if i == 0: break
    if dem == 3:
        res = ',' + res
        dem = 0
    i -= 1
print(res)
