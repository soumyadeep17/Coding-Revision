// Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {51, 49, 66, 77};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int temp_max,temp_min = arr[0];
    for (int i = 1; i < arrSize; i++)
    {
        if (arr[i] > temp_max)
            temp_max = arr[i];
        if (arr[i] < temp_min)
            temp_min = arr[i];
    }
    cout << temp_min << ' ' << temp_max;
    return 0;
}