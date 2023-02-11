from numpy import *
from numpy import array
# Quick sort algorithm
class Quick:
    #def __init__(self):
        #self.a1=array([10,9,8,7,6,5,4,3,2,1])
    def take_input(self):
        n=int(input("Enter the number of elements: "))
        self.n=n
        self.a1=zeros(n)
        for i in range(n):
            self.a1[i]=int(input())
    def partition(self,low,high):
        i=low
        j=high
        pivot=self.a1[low]
        while (i<j):
            while(self.a1[i]<=pivot):
                if(i<high):
                    i=i+1
                else:
                    break
            while(self.a1[j]>pivot):
                j=j-1
            if(i<j):
                self.a1[i],self.a1[j]=self.a1[j],self.a1[i]
        (self.a1[j], self.a1[low]) = (self.a1[low], self.a1[j])
        return j
    def quick_sort(self,low,high):
        if(low<high):
            pi=self.partition(low,high)
            self.quick_sort(low, pi-1)
            self.quick_sort(pi+1,high)
    def display(self):
        print("The sorted array is : ",self.a1)

#Crating objects of class Quick
r1=Quick()
r1.take_input()
r1.quick_sort(0,r1.n-1)
r1.display()
