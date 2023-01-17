from numpy import array

def partition(arr,low,high):
    if low < high :
        i = low 
        j = high
        pivot = arr[low]

        while (i<j):

            while (arr[i]<= pivot):
                if (i < high):
                    i = i + 1 
                else : 
                    break 

            while (arr[j] > pivot):
                j = j - 1 

            if (i<j):
                arr[i], arr[j] = arr[j], arr[i]
        
        arr[j], arr[low] = arr[low], arr[j]

        return j 

def quicksort (arr, low, high):
    if low < high : 
        pi = partition(arr, low, high)
        quicksort(arr,low, pi-1)
        quicksort(arr,pi+1, high)

arr = array([10,79,8,7,-8,22,4,3,2,1])
quicksort(arr,0,9)
print(arr)