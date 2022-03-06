def peakINdex(arr,start,end):
    if start == end:
        return start
    mid = start + (end - start)//2
    if arr[mid]>arr[mid+1]:
            return peakINdex(arr,0,mid)
    if arr[mid]<arr[mid+1]:
        return peakINdex(arr,mid+1,end)


        