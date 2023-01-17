
x = 3

print(id(x))

x = "india"
print(id(x))

lst = [4,4,23,3,4,3]
print(id(lst))

lst.append(67)
print(id(lst))

lst.remove(67)
print(id(lst))

lst.remove(23)
print(id(lst))