num = [4,5,6]   
target = 6
def search (num,start,end,target):
    if start == end and num[start] == target:
        return start
    if start == end and num[start] != target:
        return -1
    mid = (end + start)//2 # 3
    if search(num,start,mid,target) == -1:
        return search(num,mid+1,end,target)
    else:
        return search(num,start,mid,target)
print(search(num,0,len(num)-1,target))