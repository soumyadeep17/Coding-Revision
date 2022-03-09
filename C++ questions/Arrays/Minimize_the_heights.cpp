// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. 
// After modifying, height should be a non-negative integer. 
// Find out the minimum possible difference of the height of shortest and longest towers after you have modified each tower.

// You can find a slight modification of the problem here.
// Note: It is compulsory to increase or decrease (if possible) by K to each tower.
// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// to be understanded
int getMinDiff(int arr[], int n, int k) 
    {
       sort(arr , arr + n);
       int maxEle , minEle;
       int result = arr[n-1] - arr[0];
       
       for(int i = 1 ; i < n ; i++)
       {
        maxEle = max(arr[i-1] + k , arr[n-1] - k);
        minEle = min(arr[0] + k, arr[i]-k);
        if(minEle < 0) //VVI step
        continue;
        result = min(result , maxEle - minEle);
       }
       return result;
   }
int main()
{
    int arr[] = {1, 5, 8, 10};
    int k = 2;                       
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid = (n-1)/2;
    int temp = arr[mid];
    sort(arr,arr + n);  
    for(int i = 0 ; i<n ;i++ ){
        if (i>mid & arr[i]>=k)
        arr[i] = arr[i] - k;
        else
        arr[i] = arr[i] + k;
    }
    sort(arr,arr+n);
    int j = 0;
    cout<<arr[n-1] - arr[0]<<endl;
}


