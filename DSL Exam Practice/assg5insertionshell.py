
class Student_record :

    def get_data(self):
        self.marks = []
        self.count = int(input("Enter no of students in class : "))
        print("Enter marks of students : ")
        for i in range (self.count):
            mark = float(input())
            self.marks.append(mark)

    def insertion_sort(self):
        arr = self.marks
        n = self.count

        for i in range (1,n):
            for j in range (i,0,-1):
                if (arr[j-1] > arr[j]) :
                    arr[j-1], arr[j] = arr[j], arr[j-1]
                else : 
                    break 
        
        return arr 

    def shell_sort(self):
        arr = self.marks
        n = self.count 

        gap = n // 2

        while (gap >= 1):
            for i in range (gap, n, +1):
                for j in range (i, 0, -gap):
                    if (arr[j-gap] > arr[j]) :
                        arr[j-gap], arr[j] = arr[j], arr[j-gap]
                    else :
                        break 
            gap = gap // 2
        
        return arr 

    def display_top_5(self):
        print("Displaying top 5 Students : ")
        for i in range (5):
            print(self.marks[self.count-i-1])

def display_menu():
    print("--------MENU---------")
    print("1.Insertion sort")
    print("2.Shell sort")
    print("3.Display to 5")
    print("0.Exit")


r1 = Student_record()
r1.get_data()

flag = True

while (flag):
    display_menu()
    code = int(input("Enter operation code : "))

    if (code == 1 ):
        print(r1.insertion_sort())

    elif (code == 2) :
        print(r1.shell_sort())

    elif (code == 3):
        print(r1.display_top_5())

    elif (code == 0):
        print("Thank you!")
        flag = False

    else : 
        print("Invalid operation code ")



