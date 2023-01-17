import numpy as np 
from numpy import array

class std_attendance:
    def get_attendance(self):
        self.n = int(input("Enter no of students who attended program : "))
        self.attendance = array(np.zeros(self.n))
        print("Enter roll nos of present students : ")
        for i in range (self.n):
            self.attendance[i] = int(input())
    
    def binary_search(self,key):
        start = 0 
        end = self.n - 1
        mid = int((start + end)/2)

        while (start<=end):
            if (self.attendance[mid] == key):
                return mid
            
            elif (key < self.attendance[mid]):
                start = start 
                end = mid -1 
                mid = int((start + end)/2)

            else :
                start = mid + 1
                end = end
                mid = int((start + end)/2)

        return -1

    def fibonacci_search(self,key):
        fibm2 = 0 
        fibm1 = 1
        fibm = fibm2 + fibm1

        while (fibm < self.n):
            fibm2 = fibm1
            fibm1 = fibm 
            fibm = fibm1 + fibm2

        offset = -1

        while (fibm>1):

            i = min(offset+fibm2,self.n-1)
            
            if (self.attendance[i] == key):
                return i
            
            elif (self.attendance[i] > key):
                fibm1 = fibm1 - fibm2
                fibm = fibm2
                fibm2 = fibm - fibm1

            else :
                offset = i
                fibm = fibm1
                fibm1 = fibm2
                fibm2 = fibm - fibm1
  

        if self.attendance[0] == key :
            return 0
        elif self.attendance[self.n-1] == key:
            return self.n-1
        
        # return -1


obj = std_attendance()
obj.get_attendance()
print(obj.binary_search(6))
print(obj.fibonacci_search(1))

