prime = [True] * 1001


def SieveOfPrime():
    prime[0] = prime[1] = False
    for i in range(2, 1001):
        if prime[i]:
            for j in range(i * i, 1001 , i):
                prime[j] = False


SieveOfPrime()


def sortPrimes(arr, n):
    v = []
    for i in range(n):
        if prime[arr[i]]:
            v.append(arr[i])
    v.sort()
    j = 0
    for i in range(n):
        if prime[arr[i]]:
            arr[i] = v[j]
            j += 1
    return arr


n = int(input())
arr = [int(i) for i in input().split()]
arr = sortPrimes(arr, n)
for i in range(n):
    print(arr[i], end=" ")
