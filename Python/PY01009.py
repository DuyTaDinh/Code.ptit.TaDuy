import re
s= input()
count = len(re.findall(r'[A-Z]',s))
print(s.upper()) if count*2 > len(s) else print(s.lower())