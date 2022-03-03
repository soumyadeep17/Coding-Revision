// Input:
// N = 3
// Arr[] = {1, 3, 3}
// Output: 3 2
// Explanation: Repeating number is 3 and 
// smallest positive missing number is 2.
// Input:
// N = 2
// Arr[] = {2, 2}
// Output: 2 1
// Explanation: Repeating number is 2 and smallest positive missing number is 1.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // only sorted array as input
    int arr[] = {1,3,3};
    // int arr[] = {1,2,4,5,6,6};
    int i =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    while(i<n)
    {
        if (i+1 != arr[i] & arr[i+1] !=i+1)
            break;
        i++;
    }
    int temp = arr[0]; 
    for (int i =1;i<n;i++)
    {
        if (temp == arr[i])
        break;
        else
        temp = arr[i];
    }
    cout<<"repeated: "<<temp<<" missing: "<<i+1<<endl;
}