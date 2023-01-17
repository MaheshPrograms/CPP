from numpy import array
def insertionsort(arr):
    n = len(arr)
    for i in range (1,n) :
        for j in range (i,0,-1):
            if (arr[j]<arr[j-1]):
                arr[j],arr[j-1] = arr[j-1],arr[j]
            else : 
                break

arr = array([10,9,-8,7,6,78,4,87,-2,1])
insertionsort(arr)
print(arr)
