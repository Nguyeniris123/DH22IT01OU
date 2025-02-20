from itertools import count

from unicodedata import normalize

x = 3 + 2
print('3 + 2 = ', x)
print('3 - 2 = ', 3 - 2)
print('3 * 2 = ', 3 * 2)
print('3 / 2 = ', 3 / 2)
print('3 ** 2 = ', 3 ** 2)
print('3 // 2 = ', 3 // 2)
print('12 % 5 = ', 12 % 5)
print('abs(-88) = ', abs(-88))

com = 1 + 2j
print(com)
com2 = complex(1, 2)
print(com2)
com3 = 4 - 1j
print(com3)

print("hello")
print("hello" + "world")
print("hello" * 3)
print("Hello\nWorld")
print("Hello\tWorld")

Str = "abcdef"
print(Str[2])
print(Str[1:5:2])
print(Str[2:5:2])

##Vong lap Loop
# C1
name = "HoChiNguyen"
for i in name:
    print(i, end=" ")

# C2
for i in range(1, 11):
    if i % 2 == 1:
        print(i)

# C3a
# Cach1
S = sum(range(1, 11, 2))
print(S)

# Cach2
suma = 0
for i in range(1, 11):
    if i % 2 == 1:
        suma = suma + i
print(suma)

# C3b
sumb = 0
for i in range(1, 7):
    sumb = sumb + i
print(sumb)

# 4a
mydict = {"a": 1, "b": 2, "c": 3, "d": 4}
for i in mydict:
    print(i, end="")
print()
# 4b
mydict = {"a": 1, "b": 2, "c": 3, "d": 4}
for i in mydict:
    print(mydict[i])
# 4c
mydict = {"a": 1, "b": 2, "c": 3, "d": 4}
print(mydict)

#c5
courses=[131,141,142,212]
names=["Maths", "Physics","Chem","bio"]
print(list(zip(courses, names)))

#c6a
words="jabbawocky"
vowels = "auoei"
count=0
print(sum(1 for c in words if c not in vowels))

#c6b
words="jabbawocky"
vowels = "auoei"
count=0
for c in words:
    if c in vowels:
        continue
    count+=1
print(count)

#c7
for a in range(-2, 4):
    try:
        print("10/",a,"=", 10/a)
    except:
        print("can’t divided by zero")
#c8
ages = [23,10,80]
names=["Hoa","Lam","Nam"]
t1 = zip(ages, names)
sort = sorted(t1, key = lambda x:x[0])
print(sort)

#c9a
file = open("abc.txt", mode = "r")
#c9b
for line in file:
    print(line, end="")
#c9c
content = file.read()
print(content)
file.close()

#DEFINE  A FUNCTION
#c1
def sum(a,b):
    return a+b

s = sum(3,4)
print(s)

#c2
import numpy as np
def rank(lst:list):
    return np.linalg.matrix_rank(list)

def shap(list):
    return np.shape(list)

matrix = [[1,2,3], [4,5,6], [7,8,9]]
v = [1,2,3]
print(rank(matrix))
print(shap(v))

#c3
New_M = matrix*3
print(New_M)

#c4
# M_v = matrix.T
# V_t = v.reshape(-1,1)
# print(V_t)

#c5
x = np.array([2,7])
norm_x = np.linalg.norm(x)
normalized_x = x/norm_x
print(normalized_x)

#c6-7
a=[10, 15]
b=[8,2]
c=[1,2,3]
print(a+b)
# print(a-b)
# print(a-c)

#c8
A = np.array([[2,4,9],[3,6,7]])
print(rank(A))
print(shap(A))
print(A[:,1])

#c9
matrix = np.random.randint(-10, 11, (3,3))
print(matrix)

#c10
matrix=np.eye(3)
print(matrix)

#c11
matrix = np.random.randint(1, 11, (3,3))
#cauA
print(np.trace(matrix))
#cauB
sum = 0
count = 0
for i in matrix:
    for j in range(len(i)):
        if j == count:
            sum+=i[j]
    count+=1
print(sum)

#c12
matrix = np.diag ([1,2,3])
print(matrix)

#c13
A= np.array([[1,2,3], [2,4,-3], [3,6,-5]])
print(np.linalg.det(A))
