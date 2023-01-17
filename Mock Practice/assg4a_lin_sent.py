import numpy as np
from numpy import array


class std_attendance :

    def get_attendance(self):
        self.n = int(input("Enter no of students who attended program : "))
        self.attendance = array(np.zeros(self.n))
        print("Enter roll nos of present students : ")
        for i in range (self.n):
            self.attendance[i] = int(input())

    def linear_search(self, key):
        for i in range (self.n):
            if self.attendance[i] == key :
                return True
        return False

    def sentinel_search(self, key):
        arr = array(np.zeros(self.n+1))
        for i in range (self.n):
            arr[i] = self.attendance[i]
        arr[self.n] = key        
        index = -1
        flag = False

        for i in range (self.n+1):
            if ( arr[i] == key):
                index = i 
                flag = True
                break
            else :
                continue
        
        if index < self.n :
            return True
        else :
            return False
            
atd = std_attendance()
atd.get_attendance()
print(atd.linear_search(5))
print(atd.linear_search(8))
print(atd.sentinel_search(2))
print(atd.sentinel_search(11))