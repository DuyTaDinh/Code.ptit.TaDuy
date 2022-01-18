import re

text = str()
while True:
    try:
        line = input().lower()
        text += line + " "
    except EOFError:
        break

text = re.split("[.!?]\s*", text) # tach theo cau
text.remove('')
for i in text:
    i = (i[0].upper() + i[1:]).split() # format
    i = ' '.join(i)
    print(i)