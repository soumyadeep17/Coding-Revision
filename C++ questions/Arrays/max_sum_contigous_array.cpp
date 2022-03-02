#include <iostream>
using namespace std;
int subArraySum(int arr[], int start, int end)
{
    int sum = 0;
    while(start<=end)
    {
        sum = sum + arr[start];
        start++;
    }
    return sum;
}
int maxSubarraySum(int arr[], int n){
    
       int maxsofar=arr[0];
       int maxending=arr[0];
       for(int i=1;i<n;i++)
       {
           int num=arr[i];
           maxending=max(num,maxending+num);
           maxsofar=max(maxsofar,maxending);
       }
       return maxsofar;
    }
int main()
{
    int arr[] {1,2,-3};
    int arrSize = sizeof(arr)/sizeof(arr[0]) ;
    int maxSubArraySum = arr[0];
    for (int i = 0; i<arrSize;i++)
    {
        for (int j = i; j<arrSize ; j++)
        {
            if(subArraySum(arr,i,j)> maxSubArraySum)
            maxSubArraySum = subArraySum(arr,i,j);
        }
    }
    cout<<maxSubarraySum(arr,arrSize) << endl;
    return 0;
    
} // namespace name
