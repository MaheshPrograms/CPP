
class Matrix:

    def get_matrix(self):
        self.rows = int(input("Enter no of rows : "))
        self.columns = int(input("Enter no of columns : "))

        self.matrix = []

        for i in range (self.rows):
            print("Enter elements of row no {}".format(i+1))
            row = []
            for j in range (self.columns):
                elm = int(input())
                row.append(elm)
            self.matrix.append(row)

    def __add__(self, mat):
        m1 = self.matrix
        m2 = mat.matrix

        if (self.rows != mat.rows or self.columns != mat.columns):
            print("Addition not possible")
        else :
            m_add = []
            for i in range (self.rows):
                row = []
                for j in range (self.columns):
                    row.append(0)
                m_add.append(row)
            
            for i in range (self.rows):
                for j in range (self.columns):
                    m_add[i][j] = m1[i][j] + m2[i][j]
        return m_add 

    def __sub__(self, mat):
        m1 = self.matrix 
        m2 = mat.matrix 
        m_sub = []

        if (self.rows != mat.rows or self.columns != mat.columns):
            print("Substraction not possible")

        else : 
            for i in range (self.rows):
                row = []
                for j in range (self.columns):
                    row.append(0)
                m_sub.append(row)

            for i in range (self.rows):
                for j in range (self.columns):
                    m_sub[i][j] = m1[i][j] - m2[i][j]
        return m_sub

    def __mul__(self, mat):
        m1 = self.matrix 
        m2 = mat.matrix
        m_mult = []

        if (self.columns != mat.rows):
            print("Multiplication not possible")
        
        else : 
            for i in range (self.rows):
                row = []
                for j in range (mat.columns):
                    row.append(0)
                m_mult.append(row)

            for i in range (self.rows):
                for j in range (mat.columns):
                    elm = 0 
                    for k in range (self.columns):
                        elm = elm + m1[i][k] * m2[k][j]
                    m_mult[i][j] = elm
            return m_mult

    def transpose (self):
        m = self.matrix
        transpose = []
        for i in range (self.columns):
            row = []
            for j in range (self.rows):
                row.append(0)
            transpose.append(row)
        
        for i in range (self.columns):
            for j in range (self.rows):
                transpose[i][j] = m[j][i]
        
        return transpose

def display_menu():
    print("1.Addition")
    print("2.Substraction")
    print("3.Multiplication")
    print("4.Transpose")
    print("0.Exit")

flag = True

while (flag):
    display_menu()

    code = int(input("Enter operation code : "))

    if (code == 1):
        m1 = Matrix()
        m2 = Matrix()

        print("Enter details of first matrix ")
        m1.get_matrix()
        print("Enter details of second matrix ")
        m2.get_matrix()

        print(m1 + m2)
    
    elif (code == 2):
        m1 = Matrix()
        m2 = Matrix()

        print("Enter elements of first matrix")
        m1.get_matrix()

        print("Enter elements of second matrix")
        m2.get_matrix()

        print(m1 - m2)

    elif(code == 3) :
        m1 = Matrix()
        m2 = Matrix()

        print("Enter details of first matrix")
        m1.get_matrix()

        print("Enter details of second matrix")
        m2.get_matrix()

        print(m1*m2)

    elif (code == 4):
        m  = Matrix()
        print("Enter matrix elements")
        m.get_matrix()
        print(m.transpose())
    
    elif (code == 0):
        print("Thank you!")
        flag = False

    else :
        print("Invalid code")
