
class Program_record:

    def ger_record(self):
        self.present_rolls = []
        self.count = int(input("Enter no of students who attended program : "))
        print("Enter present roll numbers : ")
        for i in range (self.count):
            elm = int(input())
            self.present_rolls.append(elm)

    def binary_search(self,key):
        arr = self.present_rolls
        n = self.count

        start = 0 
        end = n-1
        mid = (start + end)//2

        while(end - start >= 0):
            
            if(arr[mid] == key):
                print("Student was present")
                return 
            
            elif (key < arr[mid]):
                start = start 
                end = mid - 1
                mid = (start + end) // 2

            else :
                start = mid + 1
                end = end
                mid = (start + end) // 2
        
        print("Student was absent")

    def fibonacci_search(self,key) : 
        arr = self.present_rolls
        n = self.count
        fibm2 = 0 
        fibm1 = 1
        fibm = fibm2 + fibm1

        while (fibm < n ):
            fibm2 = fibm1
            fibm1 = fibm
            fibm = fibm2 + fibm1
        
        offset = -1 
        print(fibm2)

        while (fibm1 >= 1):
            i = offset + fibm2
            print(i)

            if (arr[i] == key):
                print("Student was present")
                return

            elif (key < arr[i]):
                fibm = fibm2
                fibm1 = fibm1 - fibm2
                fibm2 = fibm - fibm1

            else:
                offset = fibm
                fibm = fibm1
                fibm1 = fibm2 
                fibm2 = fibm - fibm1
        
        print("Student was absent")
                
def display_menu():
    print("-----------MENU-----------")
    print("1.Binary Search")
    print("2.Fibonacci search")

r1 = Program_record()
r1.ger_record()

flag = True 

while (flag):
    key = int(input("Enter the roll no you want to search : "))
    display_menu()
    code = int(input("Enter operation code for search you want to perform : "))

    if (code == 1):
        r1.binary_search(key)

    elif (code == 2):
        r1.fibonacci_search(key)
    
    else : 
        print("Invalid operation code ")

    flag = int(input("Do you want to contiue? [0/1] : "))


