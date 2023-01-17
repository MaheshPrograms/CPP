
class Second_year:
    
    def get_data(self):
        self.cls_strength = int(input("Enter total no of students in class : "))
        self.cls = []
        for i in range (self.cls_strength):
            self.cls.append(i+1)

        self.cricket_count = int(input("Enter no of students who play cricket : "))
        print("Enter roll nos of students who play cricket")
        self.cric_std = []
        for i in range (self.cricket_count):
            roll = int(input())
            flag = True
            for j in range (len(self.cric_std)):
                if (self.cric_std[j] == roll):
                    flag = False
                    print("Roll no already entered")
                    break
            if (flag == True):
                self.cric_std.append(roll)

        self.badminton_count = int(input("Enter no of students who play badminton : "))
        print("Enter roll nos of students who play badminton")
        self.bdm_std = []
        for i in range (self.badminton_count):
            roll = int(input())
            flag = True
            for j in range (len(self.bdm_std)):
                if (self.bdm_std[j] == roll):
                    flag = False
                    print("Roll no already entered")
                    break
            if (flag == True):
                self.bdm_std.append(roll)

        self.football_count = int(input("Enter no of students who football football : "))
        print("Enter roll nos of students who play football")
        self.ftb_std = []
        for i in range (self.football_count):
            roll = int(input())
            flag = True
            for j in range (len(self.ftb_std)):
                if (self.ftb_std[j] == roll):
                    flag = False
                    print("Roll no already entered")
                    break
            if (flag == True):
                self.ftb_std.append(roll)

    def cric_and_bdm(self):
        cric_and_bdm = []
        for i in range (self.cricket_count):
            for j in range (self.badminton_count):
                if (self.cric_std[i] == self.bdm_std[j]):
                    cric_and_bdm.append(self.cric_std[i])
        return cric_and_bdm

    def cric_or_bdm_not_both(self):
        cric_or_bdm_not_both = []
        cric_and_bdm = self.cric_and_bdm()
        for i in range (self.cricket_count):
            flag = True
            for j in range (len(cric_and_bdm)):
                if (self.cric_std[i] == cric_and_bdm[j]):
                    flag = False
                    break
            if (flag == True):
                cric_or_bdm_not_both.append(self.cric_std[i])
        
        for i in range (self.badminton_count):
            flag = True
            for j in range (len(cric_and_bdm)):
                if (self.bdm_std[i] == cric_and_bdm[j]):
                    flag = False
                    break
            if (flag == True):
                cric_or_bdm_not_both.append(self.bdm_std[i])
        
        return cric_or_bdm_not_both

    def neither_cric_nor_bdm(self):
        neither_cric_nor_bdm = []
        
        for i in range (self.cls_strength):
            flag = True
            for j in range (self.cricket_count):
                if (self.cls[i] == self.cric_std[j]):
                    flag = False
            for j in range (self.badminton_count):
                if (self.cls[i] == self.bdm_std[j]):
                    flag = False
            if (flag == True):
                neither_cric_nor_bdm.append(self.cls[i])
        return neither_cric_nor_bdm

    def cric_and_ftb_not_bdm(self):
        cric_and_ftb = []
        for i in range (self.cricket_count):
            for j in range (self.football_count):     
                if (self.cric_std[i] == self.ftb_std[j]):
                    cric_and_ftb.append(self.cric_std[i])

        cric_and_ftb_not_bdm = []
        for i in range (len(cric_and_ftb)):
            flag = True
            for j in range (self.badminton_count):
                if (cric_and_ftb[i] == self.bdm_std[j]):
                    flag = False
            if (flag == True):
                cric_and_ftb_not_bdm.append(cric_and_ftb[i])
        return cric_and_ftb_not_bdm

def display_menu():
    print("----------------Menu-----------------")
    print("1.List of students who play both cricket and badminton")
    print("2.List of students who play cricket or badminton not both")
    print("3.List of students who play neither cricket nor badminton")
    print("4.List of students who play cricket and football but not badminton")
    print("0.Exit")


SE = Second_year()
SE.get_data()

flag = True 
while (flag):
    display_menu()
    code = int(input("Enter choice code"))

    if (code == 1):
        print(SE.cric_and_bdm())
    
    elif (code == 2):
        print(SE.cric_or_bdm_not_both())

    elif (code == 3):
        print(SE.neither_cric_nor_bdm())

    elif (code == 4):
        print(SE.cric_and_ftb_not_bdm())

    elif (code == 0 ):
        print("Thank you!")
        flag = False
    
    else :
        print("Invalid code")





