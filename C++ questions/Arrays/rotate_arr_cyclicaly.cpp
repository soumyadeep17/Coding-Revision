#include <iostream>
using namespace std;
void rotate(int arr[],int n){
    for (int i = 0; i<n-1;i++){
        swap(arr[i],arr[n-1]);
    }
}
int main()
{   
    // int arrSize;
    // cin>> arrSize;
    // int arr[arrSize+1] = {0};
    // for(int i = 1;i<arrSize+1 ;i++)
    // {
    //     cin>>arr[i];
    // }
    // arr[0] = arr[arrSize];
    // for(int j = 0; j<arrSize ;j++)
    // {
    //     cout<<arr[j];
    // }
    int arr[] = {1,2,3,4};
    const int arrSize = sizeof(arr)/sizeof(arr[0]);
    int rot_arr[arrSize] = {}; 
    for (int i = 1; i<arrSize ; i++){
        rot_arr[i] = arr[i-1];
    }
    rot_arr[0] = arr[arrSize-1];
    for (int i = 0; i<arrSize ;i++)
    {
        cout<<rot_arr[i];
    }
    rotate(arr,4);
    cout<<arr<<endl;

}