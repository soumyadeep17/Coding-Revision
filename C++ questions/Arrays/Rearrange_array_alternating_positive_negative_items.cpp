// Input:  arr[] = {1, 2, 3, -4, -1, 4}
// Output: arr[] = {-4, 1, -1, 2, 3, 4}

// Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
// output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void alt_neg_pos_items(vector<int> &v)
{
    sort(v.begin(), v.end());
    int i = 0;
    while(i<v.size())
    {
        if (v[i]>=0)
        {break;}
        i++;
    }
    int k = 1;
    int j = i;
    if (i>1)
    {
        while(j<v.size())
        {
            swap(v[k], v[j]);
            k = k + 2;
            j++;
            if (k==j)
            break;
        }
    }

}

int main()
{
    vector<int> v = {-5, -2, -5, -2, -4, -7, -1, -8, -8};
    alt_neg_pos_items(v);
    for (int i = 0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
