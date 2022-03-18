#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_common_ele(vector<int> v1 ,vector<int> v2)
{
    int i = 0;
    int j = 0;
    vector<int> v;
    while(i<v1.size() && j<v2.size())
    {
        if (v1[i] == v2[j])
        {
            v.push_back(v1[i]);
            i++;
            j++;
        }
        else if (v1[i]<v2[j])
            i++;
        else if(v1[i]>v2[j])
            j++;
    }
    return v;
}

int main()
{
    vector<int> v1 = {1, 5, 10, 20, 40, 80}; 
    vector<int> v2 = {6, 7, 20, 80, 100};         
    vector<int> v3 = {3, 4, 15, 20, 30, 70, 100, 120};
    cout<<find_common_ele(find_common_ele(v1,v2),find_common_ele(v2,v3)))
    // cout<<find_common_ele(x,y);

    // cout<<x[2];

}
