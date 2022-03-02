// Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
// Note: Return -1 if you can't reach the end of the array.

#include <iostream>
using namespace std;
int min_jumps(int arr[],int n)
{
    int i = 0,j = 0;
    while(i < n & i!=n-1)
    {
        if(arr[i] == 0)
        return -1;
        else
        {
        i = i+arr[i];
        j++;
        }
    }
    return j;
}
int main()
{                
    // int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    // int arr[] = {1, 4, 3, 2, 6, 7};
    int arr[] = {2,3,1,1,2,4,2,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<min_jumps(arr,n)<<endl;
}
