#include <iostream>
using namespace std;
int find_max(int arr[],int start ,int end)
{
    if (end - start == 1 || start == end)
        return max(arr[start],arr[end]);
    else
        {
            int mid = (start + end)/2;
            return max(find_max(arr,start,mid),find_max(arr, mid+1, end));
        }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<find_max(arr,0,n-1);
} // namespace std
