// 5
// 4 2 -3 1 6

// Output: 
// Yes

// Explanation: 
// 2, -3, 1 is the subarray 
// with sum 0.

// 5
// 4 2 0 1 6

// Output: 
// Yes

// Explanation: 
// 0 is one of the element 
// in the array so there exist a 
// subarray with sum 0.

    // def subArrayExists(self,arr,n):
    //     #  b = arr[1:] + [0]
    //     #  i = 0
    //     #  ans = False
    //     #  if 0 in arr:
    //     #     return True
    //     #  while(i<n):
    //     #     arr = [arr[i] + b[i] for i in range(n)]
    //     #     if 0 in arr :
    //     #         return True
    //     #     else:
    //     #         b = b[1:] + [0]
    //     #     i+=1
    //     #  return False
    //     flag =  False
    //     if 0 in arr:
    //         flag = True
    //         return flag
        
    //     a = [sum(arr[:i]) for i in range(1,n+1)]
    //     if (0 in a):
    //         flag = True
    //         return flag
    //     a = sorted(a)
    //     # print(a)
    //     for i in range(n-1):
    //         if a[i] == a[i+1]:
    //             flag = True
    //             break
    //     return flag
        

#include <iostream>
#include <vector>
using namespace std;
bool subArrayExists(vector<int> v)
{
        def subArrayExists(self,arr,n):
        #  b = arr[1:] + [0]
        #  i = 0
        #  ans = False
        #  if 0 in arr:
        #     return True
        #  while(i<n):
        #     arr = [arr[i] + b[i] for i in range(n)]
        #     if 0 in arr :
        #         return True
        #     else:
        #         b = b[1:] + [0]
        #     i+=1
        #  return False
}