from numpy import array

def shellsort(arr):
    n = len(arr)
    gap = int(len(arr)/2)
    
    while(gap >= 1):
        i = gap 

        while i < n :
            j = i
            
            while (j > 0):
                if (arr[j]>arr[j-gap]):
                    break
                else:
                    arr[j],arr[j-gap] = arr[j-gap],arr[j]
                    j = j - gap
            i = i + 1 
        gap = int(gap / 2)
                
arr = array([20,11,10,9,8,7,6,5,4,3,-6,87])
shellsort(arr)
print(arr)