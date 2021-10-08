n = int(input())
l = [int(x) for x in input().split()]
dem = 0
for i in range(n-1):
    if l[i] != l[i+1]:
        dem +=1
print(dem)
