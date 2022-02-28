#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};
    const int arrSize1 = sizeof(arr1)/sizeof(arr1[0]);
    const int arrSize2 = sizeof(arr2)/sizeof(arr2[0]);
    int uni[arrSize1+arrSize2] = {0};
    int i = 0;
    while(i<arrSize1){
        uni[i] = arr1[i];
        i++;
    }
    while(i >= arrSize1 & i<arrSize1 + arrSize2){
        uni[i] = arr2[i - arrSize1];
        i++;
    }
    for (int i = 0; i < 8; i++)
    {
        cout << uni[i];
    }
    
    return 0;
}