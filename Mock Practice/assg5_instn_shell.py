import numpy as np
from numpy import array


class Result : 
    def get_result(self):
        self.n = int(input("Enter no of students : "))
        self.marks = array(np.zeros(self.n))
        print("Enter marks of students : ")
        for i in range (self.n):
            self.marks[i] = int(input())
    
    def insertion_sort(self):
        arr = self.marks
        for i in range (1,self.n):
            for j in range (i,0,-1):
                if (arr[j]<arr[j-1]):
                    (arr[j],arr[j-1]) = (arr[j-1],arr[j])
        return arr

    def shell_sort(self):
        arr = self.marks
        gap = int(self.n /2 )

        while (gap>=1):
            j = gap 
            
            while j < self.n:
                i = j - gap 

                while i >= 0 :
                    if arr[i] < arr[i+gap]:
                        break
                    else :
                        arr[i],arr[i+gap] = arr[i+gap],arr[i]
                        i = i - gap
                j = j + 1

            gap = int(gap/2)
        return arr

r1 = Result()
r1.get_result()
print(r1.insertion_sort())
print(r1.shell_sort())