def partition(arr1,i,j):
    pivot = arr1[i] # Considering Pivot element as the first element
    k = i+1
    while(k<j):
        if arr1[k] > pivot and arr1[j] < pivot:
            arr1[k],arr1[j] = arr1[j],arr1[k]
            k+=1
            j-=1
        elif arr1[k] > pivot and arr1[j] > pivot:
            j-=1
        elif arr1[k] < pivot and arr1[j] < pivot:
            k+=1
        else:
            k+=1
            j-=1
    if arr1[i]>arr1[j]:
        arr1[i],arr1[j] = arr1[j],arr1[i]
    return j

def quickSort(arr, low, high):
	if len(arr) == 1:
		return arr
	if low < high:
		pi = partition(arr, low, high)
		quickSort(arr, low, pi-1)
		quickSort(arr, pi+1, high)

arr = [3,5453,464,564,6475,7]
quickSort(arr, 0, len(arr)-1)
print(arr)
