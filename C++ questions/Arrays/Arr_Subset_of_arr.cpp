#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool bin_search(vector<int> num, int start, int end , int target)
{
        if (start == end){
            if (num[start] == target)
                return true;
            else
                return false;
        }
        int mid = (end + start)/2;
        if (bin_search(num,start,mid,target) == false)
            return bin_search(num,mid+1,end,target);
        else
            return bin_search(num,start,mid,target);
}
int main()
{
    vector<int> v1 = {11,1,13,21,3,7};
    vector<int> v2 = {11,3,7,1};
    sort(v1.begin(),v1.end());
    bool flag = false;
    // for (int i =0 ; i<v2.size(); i++)
    // {
    //     if(bin_search(v1,0,v1.size(),v2[i]))
    //         {flag = true;
    //         cout<<flag<<endl;}
    //     else
        // flag = false;
    //     break;
    // }
    flag = bin_search(v1,0,v1.size(),12);
    cout<<flag<<endl;
} 