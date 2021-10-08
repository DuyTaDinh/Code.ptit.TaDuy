prime = [True] * 10001
prime[0] = prime[1] = False
for i in range(2, 10001):
    if prime[i]:
        for j in range(i*i, 10001, i):
            prime[j] = False

input()
a = [int(i) for i in input().split()]
step = []
for i in a:
    tmp = 0
    n1 = n2 = i
    while not prime[n1] and not prime[n2]:
        n1 -= 1
        n2 += 1
        tmp += 1
    step.append(tmp)
print(max(step))