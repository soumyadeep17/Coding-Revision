#include <iostream>
using namespace std;
// array me ek unique element hoga and baki sab do elements honge
// XOR property use karenge
// a xor a = 0
// a xor 0 = a

int main()
{
    int arr[] = {1,1,2,2,3};
    int ans = 0;
    for (int i =0;i<5;i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<ans;
}