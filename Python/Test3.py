'''
# Sort Python
L = sorted (L, reverse = True) # sắp xếp giảm dần
L = sorted (L, key = str.lower)

# Kiểm tra là số thì cho vào list
num = [int(s) for s in a.split() if s.isdigit()]

# Kiem tra so nguyen to Cách 1
def prime(n):
    if n < 2: return 0
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return 0
    return 1

# Kiểm tra số nguyên tố cách 2: Nhanh hon
Def prime(n):
	if n == 2: return 1
	if n < 2 or n%2 == 0: return 0
	i = 3
	while i*i <= n:
		if n%i == 0: return 0
		i += 2
	return 1

# Đếm số lần xuất hiện
from collections import Counter
l = ['a', 2, 1, 'b', 4, 4, 'a', 2]
d = dict(Counter(l))

# In số nguyên tố thứ 30
num = 2
dem = 1
while dem < 30:
    num += 1
    flag = True
    for j in range(2, num // 2 + 1):
        if num % j == 0:
            flag = False
            break
    if flag:
        dem += 1
print(f"So nguyen to thu 30: {num}")

n = []
for i in range(2, 10000):
    dem = 0
    for j in range(2, i//2+1):
        if i % j == 0:
            dem += 1
    if dem == 0:
        n.append(i)
print(f"so nguyen to thu 32 la {n[1-1]}")


# ord() trả về số nguyên đại diện cho mã Unicode của ký tự

# Đổi cơ số
def bas(number, base):  # searh base_repr in numpy
    digits = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    num = abs(number)
    res = []
    while num:
        res.append(digits[num % base])
        num //= base
    return ''.join(reversed(res))

# in bảng chữ cái:
for i in range(ord('A'), ord('Z') + 1):
  print(chr(i), end='')
Cách 2:
import string
print(string.ascii_uppercase)

# Tổ hợp k của n : math.comb(n, k)

# Liệt kê tổ hợp, sinh tổ hợp:
def sinhtohop(listbd, start, k, listRes):
    if k == 0:
        print(*listRes)
        return
    for i in range(start, len(listbd) - k + 1):
        listRes[len(listRes) - k] = listbd[i]
        sinhtohop(listbd, i + 1, k - 1, listRes)
Cách 2:
import itertools
l = list(itertools.combinations(listbd, k))

# Thêm phần tử của list2 vào list 1: list1.extend(list2)

# Sang nguyen to
prime = [True] * (n+1)
prime[0] = prime[1] = False
for i in range(2, n+1):
  if prime[i]:
    for j in range(i*i, n+1, i):
      prime[j] = False

# tính tổng các chữ số của một số:
sum(map(int,str(number)))

# tách theo dấu câu:
import re
text = re.split("\s*[.!?]\s*", text)

# Nhập ma trận vuông
n = int(input())
a = [[int(j) for j in input().split()] for i in range(n)]
Map: a,b,c = map(int, input().split())


# In tất cả:
Hoán vị: print(list(itertools.permutations([1, 2, 3])))
Tổ hợp: print(list(itertools.combinations([1, 2, 3], 2)))


# Đọc vô hạn:
text = str()
while True:
    try :
        line = input().lower()
        text += line + " "
    except EOFError:
        break
'''
