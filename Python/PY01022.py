def sumOfDigits(n):
    sum = 0
    for i in n:
        sum += int(i)
    return sum

n = input()
count = 0
if n[0] == '-':
    n = str(sumOfDigits(n[1:]) -3)
    count += 1
while len(n) > 1:
        n = str(sumOfDigits(n))
        count += 1
print(count)
