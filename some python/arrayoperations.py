n = int(input("Enter no of rows : "))

lst = []

for i in range (int(n*(n+1)/2) ):
    if (i%2!=0) :
        lst.append(1)
    else :
        lst.append(0)

print(lst)

for i in range (0,n+1):
    for j in range (int(((i-1)*i)/2),int((i*(i+1))/2)):
        print(lst[j], end=" ")
    print("\n")

# for i in range (1,7):
#     for j in range (int(((i-1)*i)/2),int((i*(i+1))/2)):
#         print(j+1, end=" ")
#     print("\n")