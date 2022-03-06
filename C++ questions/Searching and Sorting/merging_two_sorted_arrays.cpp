#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

vector<int> mergeTwoSortedArray(vector<int> &v1 ,vector<int> &v2)
{
    vector<int> v3;
    int i = 0;
    int j = 0;
    while (i < v1.size() || j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            v3.push_back(v1[i++]);
        }
        else
        {
            v3.push_back(v2[j++]);
        }
    }
    return v3;
}
int main()
{
    vector<int> v1 = {1};
    vector<int> v2 = {3,4,3,5,3,4};
    cout<<"hell0"<<endl;
    vector<int> x = mergeTwoSortedArray(v1,v2);
    for(int i = 0; i<x.size(); i++){
        cout<<x[i];
    }
    x.clear();
    return 0;
}