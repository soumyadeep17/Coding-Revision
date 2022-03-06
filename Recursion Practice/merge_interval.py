
# Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
# and return an array of the non-overlapping intervals that cover all the intervals in the input.
# Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
# Output: [[1,6],[8,10],[15,18]]
# Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
a = [[1,4],[5,6],[2,10],[6,12]]
b = [[1,4],[2,10]]
def merge_interval(x):
    if len(x) == 1:
        return x
    if x[0][1]>=x[1][0]:
        return merge_interval([[x[0][0],x[1][1]]] + x[2:])
    return [x[0]] + merge_interval(x[1:])
print(merge_interval(a))
a
a.remove(a[0])