
class Student_record : 
    
    def get_data(self):
        self.marks = []
        self.count = int(input("Enter no of students in class : "))
        print("Enter marks of students : ")
        for i in range (self.count):
            elm = float(input())
            self.marks.append(elm)
    
    def partition(self, low, high):
        if (low < high):
            self.marks
            i = low 
            j = high 
            pivot = self.marks[i]

            while (i < j):
                while (self.marks[i] <= pivot) :
                    if (i < high) : 
                        i = i + 1 
                    else : 
                        break 

                while (self.marks[j] > pivot) :
                    if ( j > low  ):
                        j = j - 1
                    else : 
                        break 

                if (i<j):
                    self.marks[i], self.marks[j] = self.marks[j], self.marks[i]

            self.marks[low], self.marks[j] = self.marks[j], self.marks[low]
            
            return j         

    def quick_sort(self, low, high):
        if (low < high):
            self.marks = self.marks 
            n = self.count
            pi = self.partition(low, high)
            self.quick_sort(low, pi-1)
            self.quick_sort(pi+1, high)

    def display_top_5(self):
        self.quick_sort(0, self.count-1)
        print("Displaying top 5 students : ")
        for i in range (5):
            print(self.marks[self.count-i-1])

def display_menu():
    print("-------Menu------")
    print("1.Quick Sort")
    print("2.Display top 5")
    print("0.Exit")


r1 = Student_record()
r1.get_data()

flag = True

while (flag):
    display_menu()
    code = int(input("Enter operation code : "))

    if (code == 1):
        r1.quick_sort(0, r1.count-1)
        print(r1.marks)

    elif (code == 2):
        r1.display_top_5()

    elif (code == 0):
        flag = False

    else : 
        print("Invalid input")







