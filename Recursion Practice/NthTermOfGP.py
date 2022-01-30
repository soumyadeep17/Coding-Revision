#Method 1 - Normal Recursion
def nthTermOfGP_1(a,r,n):
    if n==1:
        return a
    else:
        return r*nthTermOfGP_1(a,r,n-1)

#Method 2 - Defining Power function with time complexity O(logn) and then using it in GP function

def Pow(r,n):
    if n == 0:
        return 1
    temp = Pow(r,n//2)
    if n%2 == 0:
        return temp**2
    else:
        return r*temp**2
def nthTermofGP_2(a,r,n):
    return a*Pow(r,n-1)

# Method 1 will reach Maximum Recursion Depth..
# Method 2 is Perfect..