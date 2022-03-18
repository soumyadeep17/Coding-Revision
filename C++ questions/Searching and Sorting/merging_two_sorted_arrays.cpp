#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> &v1 ,vector<int> &v2)
{
    vector<int> v3;
    int i = 0;
    int j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
            v3.push_back(v1[i++]);
        else
            v3.push_back(v2[j++]);
    }
    if (i < v1.size())
        v3.insert(v3.end(), v1.begin()+i, v1.end());
    if (j < v2.size())
        v3.insert(v3.end(), v2.begin()+j, v2.end());
    return v3;
}
vector<int> mergeSorted(vector<int> arr)
{
    // '''returns sorted array'''
    int low = 0;
    int high = arr.size();
    int mid = (low+high)/2;
    if (arr.size()!=1)
    {
        vector<int>x1 = mergeSorted(vector(arr.begin(), arr.begin() +mid));
        vector<int>x2 = mergeSorted(vector(arr.begin() + mid, arr.begin() + arr.size()));
        return mergeTwoSortedArray(x1,x2);
    }
    
}

int main()
{
    vector<int> v1 = {1,6,9};
    vector<int> v2 = {3,3,3,3,3,4};
    vector<int> arr = {4,5,6,90,5,3};
    vector<int> a = mergeSorted(arr);
    for (int i = 0 ;i< a.size() ; i++)
        cout<<a[i];
    return 0;
}