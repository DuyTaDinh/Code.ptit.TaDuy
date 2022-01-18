#### REGEX
import re

"""
Method to search for matches
re.findall, finditer, search
"""


def bai1():
    t = '123abc123abc123ABC'
    m = re.finditer(r"abc", t)
    for i in m:
        print(i)


# Output
# <re.Match object; span=(3, 6), match='abc'>
# <re.Match object; span=(9, 12), match='abc'>

"""
Method on a math object
Group, start, end, span
"""


def bai2():
    t = '123abc123abc123ABC.'
    m = re.finditer(r"123", t)
    for i in m:
        print(i.span(), i.start(), i.end(), i.group())

# Output
# (3, 6) 3 6 abc
# (9, 12) 9 12 abc
r"""
All characters: . ^ $ * + ? { } [ ] \ | ( )
.   any character
^   start
$   end
*   0 or more
+   1 or more
?   0 or 1
{4}     exact number
{4,6}   range numbers
[ ] set characters

\d:     decimal    ><   \D:     non-decimal
\s:     space      >< \S
\w:     [a-zA-Z0-9_]       ><   \W
\b:     beginning or end of a word >< \B
"""
def bai3():
    t = '123a _bc45 6ABC %^@.'
    m = re.finditer(r"\b[\w]", t)
    for i in m:
        print(i.span(), i.group())

# Output:
# (0, 1) 1
# (5, 6) _
# (11, 12) 6

def bai4():
    t = """01.04.2020       2020-04-01  2020.05.22    2020/04/01   2020_04_06"""
    m = re.finditer(r"\d{4}[-/]\d\d[-/]\d\d", t)
    for i in m:
        print(i.span(), i.group())

bai4()