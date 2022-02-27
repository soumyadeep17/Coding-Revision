#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, -6, 2, 0,-5, -4, 9, 8};

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0;i < arrSize;i++)
    {
        for  (int j = i+1; j < arrSize;j++)
        {
            if (arr[i] > 0 & arr[j] < 0)
                swap(arr[i], arr[j]);
        }
    }
    int k = 0;
    while (k < arrSize)
    {
        cout << arr[k] << " ";
        k++;
    }
}
