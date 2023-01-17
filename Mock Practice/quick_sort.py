import numpy as np
from numpy import array

class quicksort:
    def __init__(self):
        self.arr = array([1,9,8,11,6,17,4,-3,2,0])

    def partition(self,low,high):
        if low < high :
            i = low
            j = high
            pivot = self.arr[high]

            while (i<j):
                while (self.arr[i] < pivot):
                    if (i<j):
                        i = i + 1
                    else :
                        break
                
                while (self.arr[j] >= pivot):
                    j = j - 1 

                if (i<j):
                    self.arr[i],self.arr[j] = self.arr[j],self.arr[i]
            
            self.arr[i],self.arr[high] = self.arr[high],self.arr[i]
            
            return j 
    
    def quick_sort(self,low,high):
        if low < high:
            pi = self.partition(low,high)
            self.quick_sort(low,pi-1)
            self.quick_sort(pi+1,high)

q = quicksort()
q.quick_sort(0,9)
print(q.arr)
