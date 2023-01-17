
class String : 
    def take_inp(self):
        self.inp_str = input("Enter string : ")
        self.len = len(self.inp_str)

    def get_words(self):
        words = []
        str1 = self.inp_str + " "
        start = 0
        for i in range (self.len+1):
            if (str1[i] == " "):
                word = ""
                for j in range (start, i):
                    word = word + str1[j]
                words.append(word)
                start = i+1
        return words
    
    def get_longest_word(self):
        words = self.get_words()
        longest_word = words[0]
        for i in range (len(words)):
            if (len(words[i])>len(longest_word)):
                longest_word = words[i]
        return longest_word

    def get_char_freq(self,char):
        freq = 0 
        for i in range (self.len):
            if (self.inp_str[i] == char):
                freq = freq + 1
        return freq

    def check_palidrome(self):
        flag = True
        for i in range(int(self.len/2)):
            if (self.inp_str[i]!=self.inp_str[self.len-i-1]):
                flag = False
                break
        if ( flag == True ):
            return True
        else:
            return False
             
    def first_app_of_substr(self,sub_str):
        sub_len = len(sub_str)
        flag = False
        for i in range(self.len - sub_len +1):
            if (self.inp_str[i]==sub_str[0]):
                flag = True
                for j in range(0,sub_len):
                    if (self.inp_str[i+j]!=sub_str[j]):
                        flag = False
                        break
            if flag == True:
                return i
                
        return 0

    def word_occurances(self):
        word_count_dict = {}
        words = self.get_words()
        for i in range(len(words)):
            count = 0
            for j in range (len(words)):
                if (words[i]==words[j]):
                    count = count + 1

            word_count_dict[words[i]] = count
        return word_count_dict

str1 = String()
str1.take_inp()
print(str1.get_longest_word())
print(str1.get_char_freq('a'))
print(str1.check_palidrome())
print(str1.first_app_of_substr('bc'))
print(str1.word_occurances())
