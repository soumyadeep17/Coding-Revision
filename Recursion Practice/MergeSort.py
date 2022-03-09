def merger(arr1, arr2):
    '''Merges sorted arrays and returns a sorted array '''
    i = 0
    j = 0
    arr3 = []
    while(i < len(arr1) and j<len(arr2)):
        if arr2[j]<=arr1[i]:
            arr3.append(arr2[j])
            j = j+1
        else:
            arr3.append(arr1[i])
            i = i+1
    if i < len(arr1):
        arr3.extend(arr1[i:])
    if j < len(arr2):
        arr3.extend(arr2[j:])
    return arr3
def mergeSorted(arr):
    '''returns sorted array'''
    low,high = 0,len(arr)
    mid = (low+high)//2
    if len(arr) == 1:
        return arr
    else:
        return merger(mergeSorted(arr[low:mid]),mergeSorted(arr[mid:high]))

print(mergeSorted([50000-i for i in range(50000)]))
