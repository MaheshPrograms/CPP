#DSL Assignment 4b - Binary and Fibonacci Search
from numpy import *
class Search_2:
    def __init__(self):
        n=int(input("Enter the number of elements: "))
        self.n=n
        self.a1=zeros((n))
        for i in range(n):
            self.a1[i]=int(input())
    def display(self):
        print("The input array is: ",self.a1)
    def sort_a1(self):
        temp=0
        for i in range(0,len(self.a1)):
            for j in range(i+1,len(self.a1)):
                if(self.a1[i]>self.a1[j]):
                    temp=self.a1[i]
                    self.a1[i]=self.a1[j]
                    self.a1[j]=temp
        print("The sorted array is: ",self.a1)
    #Binary Search Operation
    def binary_search(self):
        low=0
        high=len(self.a1)-1
        mid=(int((low+high)/2))
        flag=False
        ele=int(input("Enter the element you would like to search: "))
        while(high - low >= 0): # condition in while loop changed
            if(self.a1[mid]==ele):
                flag=True
                break
            elif(ele<self.a1[mid]):
                low=low # changed from low = 0 to low = low
                high=mid-1
                mid=(int((low+high)/2))
            elif(ele>self.a1[mid]):
                low=mid+1
                high=high # changed from high = len(self.a1)-1 to high = high
                mid=(int((low+high)/2))
        if flag==True:
            print("Element is present at index {}".format(mid))
        else:
            print("Element not found")

    #Fibonacci search Operation
    def fibonaaci_search(self):
        fib_m2=0
        fib_m1=1
        fib_m=fib_m1+fib_m2
        while(fib_m<self.n):
            fib_m2=fib_m1
            fib_m1=fib_m
            fib_m=fib_m1+fib_m2

        offset = -1 
        ele=int(input("Enter the element you would like to search: "))
        while (fib_m1 >= 1):
            i = min(offset + fib_m2, fib_m)

            if (self.a1[i] == ele):
                print("Element is present at {}".format(i))
                return 

            elif (ele < self.a1[i]):
                fib_m = fib_m2
                fib_m1 = fib_m1 - fib_m2
                fib_m2 = fib_m - fib_m1
            
            else : 
                offset = fib_m2
                fib_m = fib_m1 
                fib_m1 = fib_m2
                fib_m2 = fib_m - fib_m1

        print("element is not present")

            
        # mid=fib_m2
        # start=0
        
        # while(mid!=0):
        #     if(self.a1[mid]==ele):
        #         print("Element is present at index {}".format(mid))
        #         break
        #     elif(ele<self.a1[mid]):
        #         fib_m=fib_m2
        #         fib_m1=fib_m1-fib_m2
        #         fib_m2=fib_m-fib_m1
        #         mid=start+fib_m2
        #     elif(ele>self.a1[mid]):
        #         start=fib_m2
        #         fib_m=fib_m1
        #         fib_m1=fib_m1-fib_m2
        #         fib_m2=fib_m-fib_m1
        
#Creating objects of Class Search_2
obj2=Search_2()
obj2.display()
obj2.sort_a1()
print("Welcome to search2 program!!!")
print("1.Binary search")
print("2.Fibonacci search")
print("3.Exit")
while(True):
    choice=int(input("Enter the choice: "))
    if choice==1:
        obj2.binary_search()
        break
    elif choice==2:
        obj2.fibonaaci_search()
        break
    elif choice==3:
        break
    else:
        print("Invalid choice")
