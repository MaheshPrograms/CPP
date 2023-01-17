from numpy import array

def linearsearch(arr,key):
    n = len(arr)

    for i in range (n):
        if (arr[i] == key):
            return i
    
    return -1

arr = array([1,2,3,4,5,6,7,8,9,10]) 
print(linearsearch(arr,10))