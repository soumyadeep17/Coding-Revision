// Find the "Kth" max and min element of an array
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {3, 4, 1, 9,5,35,35,5,25,35,35,3};
    int k = 2;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + arrSize);
    cout << k << "th minimum is " << arr[k - 1] << endl;
    cout << k << "th maximum is " << arr[arrSize - k] << endl;
}