#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
// optimize it more to O(n+m(log(n+m)))
// void merge(int arr1[], int arr2[], int n, int m)
// {
//     for(int i =0;i<n;i++)
//     {
//         for(int j = 0;j<m;j++)
//             {
//                 if(arr1[i]>arr2[j])
//                     swap(arr1[i],arr2[j]);
//             }
//     }
//     sort(arr2,arr2+m);
// }
void mergeTwoSortedArray(vector<int> &v1, vector<int> &v2)
{   
    int i = v1.size()-1;
    int j = 0;
    while(v1[i]>v2[j] and j<v2.size())
    {
        swap(v1[i],v2[j]);
        i--;
        j++;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
}
int main()
{
    vector<int> v1 = {2,3,7,8,14,16};
    vector<int> v2 = {5,8};
    mergeTwoSortedArray(v1,v2);
    for(int i = 0; i<v1.size(); i++)
    {
        cout<<v1[i]<<endl;
    }
    for(int i = 0; i<v2.size(); i++)
    {
        cout<<v2[i]<<endl;
    }
}