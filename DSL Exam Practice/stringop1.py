
class string_op : 

    def get_string(self):
        self.inp_str = input("Enter string : " )
        self.len = len(self.inp_str)

    def get_word_list(self):
        word_list = []
        start = 0
        for i in range (len(self.inp_str)):
            if (self.inp_str[i]) == " ":
                word = ""
                for j in range (start, i):
                    word = word + self.inp_str[j]
                word_list.append(word)
                start = i+1
        last_word = ""
        for i in range (start, self.len):
            last_word = last_word + self.inp_str[i]
        word_list.append(last_word)
        return word_list

    def word_with_longest_length(self):
        word_list = self.get_word_list()
        longest_length = 0 
        longest_word = ""
        for i in range (len(word_list)):
            if (len(word_list[i]) > longest_length):
                longest_length = len(word_list[i])
                longest_word = word_list[i]
        return longest_word

    def occurance_of_char(self):
        char = input("Enter character whose frequency is to be calculated : ")
        freq = 0
        for i in range (self.len):
            if (self.inp_str[i] == char):
                freq = freq + 1 
        return freq 

    def check_palidrome(self):
        for i in range (self.len//2):
            if (self.inp_str[i] != self.inp_str[self.len - i - 1]):
                return False
        return True

    def first_app_of_substr(self):
        sub_str = input("Enter substring : ")
        for i in range (self.len-len(sub_str)+1): # traversing over string 
            # if first character of substring matches with character in main string
            # then go inside if condition
            if (self.inp_str[i] == sub_str[0]): 
                flag = True
                for j in range (len(sub_str)):
                    # we will check each character of substring with succeeding character
                    if (sub_str[j] != self.inp_str[i+j]):
                        flag = False # if at least one character differs flag will be false
                if (flag == True):
                    return i # if all characters matched return index where characters were matched
        return -1
                
    def get_word_counts(self):
        word_counts = {}
        word_list = self.get_word_list()
        for i in range (len(word_list)):
            word_counts[word_list[i]] = 0
            
        for i in range (len(word_list)):
            word_counts[word_list[i]] = word_counts[word_list[i]] + 1
        return word_counts

def display_menu():
    print("-------------MENU-------------")
    print("1.Word with longest length")
    print("2.Occurance of character")
    print("3.check palidrome")
    print("4.Fist appearance of substring")
    print("5.Get word count")
    print("0.Exit")

op = string_op()
op.get_string()

flag = True

while (flag):
    display_menu()
    code = int(input("Enter opertion code : "))

    if (code == 1):
        print(op.word_with_longest_length())

    elif (code == 2):
        print(op.occurance_of_char())

    elif (code == 3):
        print(op.check_palidrome())

    elif (code == 4):
        print(op.first_app_of_substr())

    elif (code == 5):
        print(op.get_word_counts())

    elif (code == 0):
        flag = False

    else :
        print("Invalid code entered")




