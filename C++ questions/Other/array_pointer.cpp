#include <iostream>
using namespace std;
int main()
// static
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    // all these for loops can print the array
    for (int i = 0; i<5; i++)
        cout<<*(arr+i)<<endl;
    for (int i = 0; i<5; i++)
        cout<<i[arr]<<endl;
    for (int i = 0; i<5; i++)
        cout<<arr[i]<<endl;
} // namespace std
