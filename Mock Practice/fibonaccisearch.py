from numpy import array
def fibonacci_search(arr,key):
    n = len(arr)
    fibm2 = 0 
    fibm1 = 1 
    fibm = fibm2 + fibm1

    while(fibm<n):
        fibm2 = fibm1
        fibm1 = fibm
        fibm = fibm1 + fibm2
    
    offset = -1 

    while (fibm>1):
        i = min(offset+fibm2,n-1)
        if (key == arr[i]):
            return i
        
        elif (key < arr[i]):
            fibm = fibm2
            fibm1 = fibm1 - fibm2
            fibm2 = fibm - fibm1

        else :
            fibm = fibm1
            fibm1 = fibm2
            fibm2 = fibm - fibm1
            offset = i

    return -1

arr = array([1,2,3,4,5,6,7,8,9,10]) 
print(fibonacci_search(arr,1))