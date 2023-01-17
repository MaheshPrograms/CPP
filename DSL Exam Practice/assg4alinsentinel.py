
class Program_record :

    def get_data(self):
        self.present_rolls = []
        self.count = int(input("Enter no of students who attended program : " ))
        for i in range (self.count):
            elm = int(input())
            self.present_rolls.append(elm)

    def linear_search(self, key):
        arr = self.present_rolls

        for i in range (self.count):
            if (arr[i] == key) :
                print("Roll number was present")
                return
        print("Student was absent")

    def sentinel_search(self, key) :
        arr = self.present_rolls
        n = self.count

        last = arr[n-1]
        arr[n-1] = key
        i = 0 
        while (arr[i] != key):
            i = i + 1
        
        arr[n-1] = last

        if (i < n-1 or arr[n-1] == key):
            print("Roll number was present")
        else : 
            print("Roll number was absent")

def display_menu():
    print("------------Menu------------")
    print("1.Linear Search")
    print("2.Sentinel Search")
    

r1 = Program_record()
r1.get_data()

flag = True

while (flag):
    roll = int(input("Enter roll number to be searched : "))
    display_menu()
    code = int(input("Enter operation code : "))

    if (code == 1):
        r1.linear_search(roll)
    
    elif (code == 2):
        r1.sentinel_search(roll)
    
    else : 
        print("Invalid code")

    flag = int(input("Do you want to continue? [0/1]"))
    











