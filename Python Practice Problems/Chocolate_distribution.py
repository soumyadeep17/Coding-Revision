M = 5
A = [3,4,1,9,56,7,9,12]
Arr = sorted(A)
difference_list = [Arr[i+M-1] - Arr[i] for i in range(len(A)-M+1)]
print(difference_list)
print(min(difference_list))