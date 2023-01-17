import numpy as np 
from numpy import array

class Result : 

    def __init__(self):
        self.marks = array([10,55,8,-22,-3,27,7,3,11,1,19,12,36,55,87])

    def get_marks(self):
        self.n = int(input("Enter no of students : "))
        self.marks = array(np.zeros(self.n))       
        print("Enter marks of students : ")
        for i in range (self.n):
            self.marks[i] = int(input())

    def partition(self,low,high):
        if low < high:
            i = low 
            j = high
            pivot = self.marks[low]

            while (i< j ):
                while (self.marks[i] <= pivot ):
                    if (i<j):                
                        i = i + 1
                        print(i)
                    
                    else:
                        break


                while (self.marks[j] > pivot):
                    j = j -1  

                if (i<j):
                    self.marks[i],self.marks[j] = self.marks[j],self.marks[i] 
            
            (self.marks[j] ,self.marks[low]) = (self.marks[low],self.marks[j])      
            return j

    def quick_sort(self,low,high):
        if (low < high):
            pi = self.partition(low,high)
            self.quick_sort(low,pi-1)
            self.quick_sort(pi+1,high)

    def display(self):
        print(self.marks)

r1 = Result()
# r1.get_marks()
r1.quick_sort(0,14)
r1.display()
