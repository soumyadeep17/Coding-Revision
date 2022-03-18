#include <iostream>
#include <algorithm>
using namespace std;
// input must be a array containing only one repeated element
int main()
{  
    int arr[] = {1,2,3,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int temp = arr[0]; 
    for (int i =1;i<n;i++)
    {
        if (temp == arr[i])
        break;
        else
        temp = arr[i];
    }
    cout<<temp<<endl;
    

}