# a = []
# n = int(input('n = '))
# for i in range(n):
#     a.append(int(input(f"a[{i}] = ")))
# print(a)
n = int(input('n = '))
a = [int(input(f"a[{i}] = ")) for i in range(n)]
print(a)

# d = []
# for x in a:
#     if x > 0:
#         d.append(x)
# print(max(d))

d = [x for x in a if x > 0]
print(f"So duong lon nhat: ", max(d) if len(d) > 0 else '*')

d = [x for x in a if x < 0]
print(f"So am be nhat: ", min(d) if len(d) > 0 else '*')

for x in set(a):
    print(f"{x} xuat hien {a.count(x)} lan")

k = int(input('k = '))
for x in a:
    print(f"{x} xuat hien {k} lan")

a.reverse()
print(f"Danh sach giam dan: {a}")