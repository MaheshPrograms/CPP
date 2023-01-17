from numpy import array, zeros

def add(arr1,arr2):
    r1 = len(arr1)
    c1 = len(arr1[0])
    r2 = len(arr2)
    c2 = len(arr2[0])

    add1 = zeros((r1,c1))

    for i in range (r1):
        for j in range(c1):
            add1[i,j] = arr1[i,j] + arr2[i,j]

def sub(arr1,arr2):
    r1 = len(arr1)
    c1 = len(arr1[0])
    r2 = len(arr2)
    c2 = len(arr2[0])

    sub1 = zeros((r1,c1))

    for i in range (r1):
        for j in range(c1):
            sub1[i,j] = arr1[i,j] - arr2[i,j]

def multiply(arr1,arr2):
    r1 = len(arr1)
    c1 = len(arr1[0])
    r2 = len(arr2)
    c2 = len(arr2[0])

    mult = zeros((r1,c2))

    for i in range (r1):
        for j in range (c2):
            for k in range (c1):
                mult[i,j] = mult[i,j] + arr1[i,k] * arr2[k,j]

