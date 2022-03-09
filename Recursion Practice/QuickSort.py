

def partition(arr,i,j):
    pivot = arr[i] # Considering Pivot element as the first element
    k = i+1

    while(k<=j):
        if arr[k] > pivot and arr[j] < pivot:
            arr[k],arr[j] = arr[j],arr[k]
            k+=1
            j-=1
        elif arr[k] >= pivot and arr[j] >= pivot:
            j-=1
        elif arr[k] <= pivot and arr[j] <= pivot:
            k+=1
        else:
            k+=1
            j-=1

    if arr[i]> arr[j]:
        arr[i],arr[j] = arr[j],arr[i]
        return j
    return i

 
def quickSort(arr, low, high):
	if low < high:
		pi = partition(arr, low, high)
		quickSort(arr, low, pi-1)
		quickSort(arr, pi+1, high)
	else:
		arr=arr 

n = 100

arr = [n-i for i in range(n)]
quickSort(arr, 0, len(arr)-1)
# print(partition([1,1,2,0,5],0,len(arr)-1))
print(arr)
