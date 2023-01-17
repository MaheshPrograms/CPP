from numpy import array,zeros

def sentinel_search1(arr,key):
    n = len(arr)
    new_arr = zeros(n+1)
    for i in range (n):
        new_arr[i] = arr[i]
    new_arr[n] = key
    index = -1
    for i in range (n+1):
        if new_arr[i] == key:
            index = i
            break

    if (index != n):
        return index
    else :
        return -1

def sentinelsearch2(arr,key):
    n = len(arr)
    last = arr[n-1]
    arr[n-1] = key
    i = 0 
    while (arr[i]!=key):
        i = i + 1
    
    if (last == key or i < n-1):
        return i
    else : 
        return -1

arr = array([1,2,3,4,5,6,7,8,9,10]) 
print(sentinelsearch2(arr,8))