from numpy import *
# A code to multiply two matrices
p = int(input("Enter no of rows in first matrix : "))
q = int(input("Enter no of columns in first matrix : "))
r = int(input("Enter no of rows in second matrix : "))
s = int(input("Enter no of columns in second matrix : "))

m1 = matrix(zeros((p,q)))
m2 = matrix(zeros((r,s)))

print("Enter first matrix : ")

for i in range (p):
    print("Enter values in {}th row".format(i))
    for j in range(q):
        m1[i,j] = int(input())

print("Enter second matrix : ")
for i in range (r) :
    print("Enter values in {}th row".format(i))
    for j in range(s):
        m2[i,j] = int(input())


m_matmult = matrix(zeros((p,s)))

for i in range (p) :
    for j in range (s) :
        temp = 0 
        for k in range(q) :
            temp = temp + m1[i, k] * m2[k,j]
        m_matmult[i,j] = temp 

print(m1)
print("--------------------")
print(m2)
print("--------------------")
print(m_matmult)

