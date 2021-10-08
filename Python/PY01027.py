n = input()
check = True
i = 0
while i<len(n):
    if n[i:i+3] == '688':
        i+=3
    elif n[i:i+2] == '68':
        i+=2
    elif n[i] == '6':
        i+=1
    else:
        check = False
        break
if check == True and i == len(n):
    print("YES")
else:
    print("NO")
