import math

for t in range(int(input())):
    n = input()
    n1 = n[::-1]
    n, n1 = int(n), int(n1)
    if math.gcd(n, n1) == 1:
        print("YES")
    else:
        print("NO")
