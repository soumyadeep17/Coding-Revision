from re import L
from math import prod

def productOfArrayExceptSelf(arr,n):
    m = prod(arr)
    x = [m//arr[i] for i in range(n)]
    return x

print(productOfArrayExceptSelf([1,2,3,4],4))


