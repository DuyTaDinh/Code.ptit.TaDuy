prime = [True for i in range(501)]
def SieveOfPrime():
    prime[0] = prime[1] = False
    for i in range(2, 501):
        if prime[i]:
            for j in range(i*i, 501, i):
                prime[j] = False

SieveOfPrime()

def check(s):
    for i in range(len(s)):
        if prime[i] == True and prime[int(s[i])] == False:
            return False
        elif prime[i] == False and prime[int(s[i])] == True:
            return False
    return True

for t in range(int(input())):
    s = input()
    print("YES" if check(s) else "NO")


