#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {0, 1, 2, 0, 1, 2, 2, 0};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 0;
    int k = 0;
    int no_of_zeros = 0;
    int no_of_ones = 0;
    while (i < arrSize)
    {
        if (arr[i] == 0)
            no_of_zeros++;
        if (arr[i] == 1)
            no_of_ones++;
        i++;
    }
    while (j < no_of_zeros)
    {
        if (arr[j] == 1 || arr[j] == 2)
        {
            arr[j] = 0;
        }
        j++;
    }
    while (j < no_of_zeros + no_of_ones)
    {
        if (arr[j] == 0 || arr[j] == 2)
        {
            arr[j] = 1;
        }
        j++;
    }
    while (j < arrSize)
    {
        if (arr[j] == 0 || arr[j] == 1)
        {
            arr[j] = 2;
        }
        j++;
    }
    while (k < arrSize)
    {
        cout << arr[k] << " ";
        k++;
    }
    return 0;
}
