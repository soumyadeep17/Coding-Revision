def merger(arr1, arr2):
    '''Merges sorted arrays and returns a sorted array '''
    i = 0
    j = 0
    arr3 = []
    while(i < len(arr1) and j<len(arr2)):
        if arr1[i]<=arr2[j]:
            arr3.append(arr1[i])
            i+=1
        else:
            arr3.append(arr2[j])
            j = j+1
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
        a= mergeSorted(arr[low:mid])
        b= mergeSorted(arr[mid:high])
        return merger(a,b)

print(mergeSorted([3,2,3,4]))
