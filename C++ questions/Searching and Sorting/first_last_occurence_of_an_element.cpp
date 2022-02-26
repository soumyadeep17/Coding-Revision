#include <iostream>
using namespace std;
// created a new data type to return minimum and maximum index value of the element of an array
struct Pair
{
    int first;
    int last;
};
Pair first_last_Index(int arr[], int arrSize, int x)
{
    struct Pair first_last;
    int i = 0;
    int j = arrSize - 1;
    while (i < arrSize)
    {
        if (arr[i] == x)
            break;
        else
            i++;
    }
    while (j >= 0)
    {
        if (arr[j] == x)
            break;
        else
            j--;
    }
    first_last.first = i+1;
    first_last.last = j+1;

    return first_last;
}
int main()
{
    int arr[] = {2, 4, 4,6,4,4};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    Pair a = first_last_Index(arr, arrSize, x);
    cout << a.first << " " << a.last;
    return 0;
}
