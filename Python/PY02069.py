# SỐ THUẬN NGHỊCH TRONG MA TRẬN
n, m = map(int, input().split())
a = []
res = 0
for i in range(n):
    tmp = list(map(int, input().split()))
    a.extend(tmp)
for i in a:
    if i > 9 and str(i) == str(i)[::-1]:
        res = max(res, i)

if res == 0:
    print("NOT FOUND")
else:
    print(res)
    for i, v in enumerate(a):
        if v == res:
            print(f"Vi tri [{i // m}][{i % m}]")
