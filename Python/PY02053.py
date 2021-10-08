n = int(input())
a = []
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
k = int(input())
sum1 , sum2= 0,0
for i in range(n):
    for j in range(n-i-1):
        sum1 += a[i][j]
for i in range(1,n):
    for j in range(n-i,n):
        sum2 += a[i][j]
tmp = abs(sum1 - sum2)
print("YES" if tmp <= k else "NO")
print(tmp)