def count_inversion_1(arr1, arr2):
    i = 0
    j = 0
    count = 0
    while(i < len(arr1) and j<len(arr2)):
        if arr1[i]<=arr2[j]:
            i+=1
        else:
            count = count + (len(arr1) - i);
            j = j+1
    return count
def count_inversion(arr):
    if len(arr) == 1:
        return 0
    if len(arr) == 2 and arr[0]>arr[1]:
        return 1
    mid  = len(arr)//2
    arr1 =arr[:mid]
    arr2 =arr[mid:]
    return count_inversion(arr1) + count_inversion(arr2) + count_inversion_1(arr1,arr2)