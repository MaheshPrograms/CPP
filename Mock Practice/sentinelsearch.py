from numpy import array,zeros

def sentinelsearch(arr,key):
    n = len(arr)

    new_arr = array(zeros(n+1))

    for i in range (n):
        new_arr[i] = arr[i]

    new_arr[n] = key
    index = 0 
    for i in range (n+1):
        if (new_arr[i] == key):
            index = i
            break

    if index == n :
        return -1
    else :
        return index

arr = array([1,2,3,4,5,6,7,8,9,10]) 
print(sentinelsearch(arr,1))