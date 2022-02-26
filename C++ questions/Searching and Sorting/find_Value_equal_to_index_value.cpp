#include <iostream>
using namespace std;
int main()
{
    int arr[] = {234, 234, 233254, 4};
    int i = 1;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    while (i < arrSize + 1)
    {
        if (arr[i - 1] == i)
            break;
        else
            i++;
    }
    if (i == arrSize + 1)
        i = -1;
    cout << i;
}