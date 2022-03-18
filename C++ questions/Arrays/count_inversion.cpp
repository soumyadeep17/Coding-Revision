#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int count_inversion(vector<long long> &v1 ,vector<long long> &v2)
{
    int i = 0;
    int j = 0;
    long long int count = 0;
    while (i < v1.size() && j < v2.size())        
    {
        if (v1[i] < v2[j])
            i++;
        else
        {
            count = count + (v1.size() - i);
            j++;
        }
    }
    return count;
}

long long int mergeSorted(vector<long long> arr)
{
    // '''returns sorted array'''
    int low = 0;
    int high = arr.size();
    int mid = (low+high)/2;
    long long int inversion_count = 0;
    if (arr.size() == 1)
        return 0;
    if (arr.size() ==  2 && arr[0]>arr[1])
        return 1;
    else 
    {
        vector<long long>x1 = vector(arr.begin(), arr.begin() +mid);
        vector<long long>x2 = vector(arr.begin() + mid, arr.begin() + high);
        inversion_count = inversion_count + mergeSorted(x1) + mergeSorted(x2);
        sort(x1.begin(),x1.end());
        sort(x2.begin(),x2.end());
        return inversion_count + count_inversion(x1,x2);
    }
}

int main()
{
    vector<long long> v = {2, 3, 4, 5, 6};
    cout<<mergeSorted(v);
    return 0;
}