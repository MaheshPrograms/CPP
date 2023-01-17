import numpy as np
from numpy import array

class Matrix:

    def __init__(self, r, c):
        self.r = r 
        self.c = c 
        self.M = array(np.zeros((self.r,self.c)))

    def matrix_inp(self):
        print("Enter Matrix elements : ")
        for i in range (self.r):
            print("Enter elements of row {}".format(i+1))
            for j in range (self.c):
                self.M[i,j] = int(input())

    
    def display_matrix(self):
        print(self.M)


    def __add__(self,M2):
        if (self.r != M2.r or self.c != M2.c):
            return ("Matrix addition not possible")
        else :
            add = Matrix(self.r, self.c)
            for i in range (self.r):
                for j in range (self.c):
                    add.M[i,j] = self.M[i,j] + M2.M[i,j]
        return add.M

    def __sub__(self,M2):
        if (self.r != M2.r or self.c != M2.c):
            return ("Matrix substraction not possible")
        else:
            sub = Matrix(self.r,self.c)
            for i in range (self.r):
                for j in range (self.c):
                    sub.M[i,j] = self.M[i,j] - M2.M[i,j]
            return sub.M

    def __mul__(self,M2):
        if (self.c != M2.r):
            return ("Matrix multiplication not possible")
        else:
            mult = Matrix(self.r,M2.c)
            for i in range (self.r):
                for j in range (M2.c):
                    for k in range (self.c):
                        mult.M[i,j] = mult.M[i,j] + self.M[i,k] * M2.M[k,j]
            return mult.M
    
    def transpose(self):
        transpose = Matrix(self.c,self.r)
        for i in range (self.c):
            for j in range (self.c):
                transpose.M[i,j] = self.M[j,i]
        return transpose.M

m1 = Matrix(2,2)
m2 = Matrix(2,2)
m1.matrix_inp()
m2.matrix_inp()

print(m1+m2)
print(m1-m2)
print(m1*m2)
print(m1.transpose())
