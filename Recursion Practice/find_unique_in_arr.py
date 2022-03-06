#  array me ek unique element hoga and baki sab do elements honge
def findUniquefromSorted(arr,n):
    if len(arr) == 1:
        return arr[0]
    if (arr[0]==arr[1]):
        return findUniquefromSorted(arr[2:],n-2)
    else:
        return arr[0]

arr = [4,4,5,5,1,1,6,7,7,3,3]
print(findUniquefromSorted(sorted(arr),len(arr)))