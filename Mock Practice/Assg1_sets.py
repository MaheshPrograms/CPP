
class SE_comp:
    # Function to take input
    def get_details(self):
        
        self.cric_std = int(input("Enter No of students playing cricket : "))
        self.cric_std_lst = []
        print("Enter roll nos of students playing cricket : ")
        for i in range (self.cric_std):
            e = int(input())
            if e not in self.cric_std_lst:
                self.cric_std_lst.append(e)
            else : 
                print("Student is already entered")
                self.cric_std = self.cric_std - 1 
        
        self.ftb_std = int(input("Enter No of students playing football : "))
        self.ftb_std_lst = []
        print("Enter roll nos of students playing football : ")
        for i in range (self.ftb_std):
            e = int(input())
            if e not in self.ftb_std_lst:
                self.ftb_std_lst.append(e)
            else : 
                print("Student is already entered")
                self.ftb_std = self.ftb_std - 1 

        self.bdm_std = int(input("Enter No of students playing Badminton : "))
        self.bdm_std_lst = []
        print("Enter roll nos of students playing Badminton : ")
        for i in range (self.bdm_std):
            e = int(input())
            if e not in self.bdm_std_lst:
                self.bdm_std_lst.append(e)
            else : 
                print("Student is already entered")
                self.bdm_std = self.bdm_std - 1
    
    def cric_and_bdm(self):
        cric_and_bdm_lst=[]
        c_and_b_count = 0
        for i in range (self.cric_std):
            for j in range (self.bdm_std):
                if (self.cric_std_lst[i] == self.bdm_std_lst[j]):
                    cric_and_bdm_lst.append(self.cric_std_lst[i])
                else :
                    continue

        return cric_and_bdm_lst
    
    def cric_or_bdm_not_both(self):
        cric_or_bdm_not_both_lst = []

        for i in range (self.cric_std):
            flag = False
            c_and_b = self.cric_and_bdm()
            for j in range (len(c_and_b)):
                if self.cric_std_lst[i] == c_and_b[j]:
                    flag = True 
                    break
                else : 
                    continue
            if flag == False:
                cric_or_bdm_not_both_lst.append(self.cric_std_lst[i])

        for i in range (self.bdm_std):
            flag = False
            for j in range (len(c_and_b)):
                if self.bdm_std_lst[i] == c_and_b[j]:
                    flag = True 
                    break
                else : 
                    continue
            if flag == False:
                cric_or_bdm_not_both_lst.append(self.bdm_std_lst[i])
        return cric_or_bdm_not_both_lst

    def neither_cric_nor_bdm(self):
        neither_cric_nor_bdm_lst = []
        for i in range (self.ftb_std):
            flag = False
            for j in range (self.cric_std):
                for k in range (self.bdm_std):
                    if (self.ftb_std_lst[i] == self.cric_std_lst[j] or self.ftb_std_lst[i] == self.bdm_std_lst[k] ):
                        flag = True
                        break
            if flag == False:
                neither_cric_nor_bdm_lst.append(self.ftb_std_lst[i])
        return neither_cric_nor_bdm_lst

    def cric_and_ftb_not_bdm(self):
        cric_and_ftb_lst = []
        cric_and_ftb_not_bdm_lst = []
        for i in range (self.cric_std):
            for j in range (self.ftb_std):
                if self.cric_std_lst[i] == self.ftb_std_lst[j]:
                    cric_and_ftb_lst.append(self.ftb_std_lst[j])
        for i in range (len(cric_and_ftb_lst)):
            flag = False
            for j in range (len(self.bdm_std_lst)) :
                if (cric_and_ftb_lst[i] == self.bdm_std_lst[j]):
                    flag = True
            if flag == False : 
                cric_and_ftb_not_bdm_lst.append(cric_and_ftb_lst[i])

        return cric_and_ftb_not_bdm_lst


cls1 = SE_comp() 

cls1.get_details()
print(cls1.cric_or_bdm_not_both())
print(cls1.cric_and_ftb_not_bdm())
print(cls1.neither_cric_nor_bdm())
print(cls1.cric_and_bdm())

