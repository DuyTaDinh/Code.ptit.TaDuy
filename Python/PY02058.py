# SỐ ĐẸP TRONG MA TRẬN
n, m = map(int, input().split())
a = []
for i in range(n):
    tmp = list(map(int, input().split()))
    a.extend(tmp)
res = max(a) - min(a)

if res not in a:
    print("NOT FOUND")
else:
    print(res)
    for i, v in enumerate(a):
        if v == res:
            print(f"Vi tri [{i // m}][{i % m}]")
