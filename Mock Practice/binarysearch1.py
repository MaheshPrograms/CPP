from numpy import array

def binary_search(arr,key):
    n = len(arr)
    start = 0
    end = n - 1 
    mid = int((start+end)/2)

    while (start<=end):
        if (arr[mid]==key):
            return mid

        elif (key<arr[mid]):
            start = start
            end = mid - 1
            mid = int((start+end)/2)

        else : 
            start = mid + 1 
            end = end 
            mid = int((start+end)/2)
    
    return -1


arr = array([1,2,3,4,5,6,7,8,9,10]) 
print(binary_search(arr,10))

