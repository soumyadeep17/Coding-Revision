#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

void print_arr(vector<int> v)
{
    for (auto i : v)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int k  = 4;
    vector<int> v =  {3,1,2,2,1,2,3,3};
    vector<int> res;
    int n = v.size();
    unordered_map<int, int> a;
    for (auto i : v)
    {
        a[i]++;
    }
    for (auto i : a)
    {
    if (i.second > n/k)
    res.push_back(i.first);
    }
    print_arr(res);

}