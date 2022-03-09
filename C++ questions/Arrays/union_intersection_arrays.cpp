#include <iostream>
using namespace std;
int elementinarray(int a[], int arrSize, int ele)
{
    int x = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (a[i] == ele)
        {
            x = 1;
            break;
        }
    }
    return x;
}
int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6, 7};
    const int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    const int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    int uni[arrSize1 + arrSize2] = {};
    int intersection[max(arrSize1,arrSize2)] = {};
    int uni_arrSize,j = 0;
    int k = 0;
    int int_arrSize = 0;
    while (uni_arrSize < arrSize1)
    {
        uni[uni_arrSize] = arr1[uni_arrSize];
        uni_arrSize++;
    }
    while (uni_arrSize >= arrSize1 & uni_arrSize < arrSize1 + arrSize2 & j<arrSize2)
    {
        if (elementinarray(uni,uni_arrSize,arr2[j]) == 0)
        {
            uni[uni_arrSize] = arr2[j];
            uni_arrSize++;
        }
        if (elementinarray(arr1,uni_arrSize,arr2[j]) == 1)
        {
            intersection[int_arrSize] = arr2[j];
            int_arrSize++;
        }
        j++;
    }
    for (int k = 0; k < uni_arrSize; k++)
    {
        cout << uni[k]<<endl;
    }
    for (int k = 0; k < int_arrSize; k++)
    {
        cout << uni[k]<<endl;
    }

    return 0;
}