from collections import Counter

n, m = map(int, input().split())
a = Counter(sorted(int(x) for x in input().split()))
b = sorted(set(a.values()), reverse=True)
if len(b) == 1:
    print("NONE")
else:
    for key, value in sorted(a.items(), key=lambda i: i[1], reverse=True):
        if value == b[1]:
            print(key)
            break
