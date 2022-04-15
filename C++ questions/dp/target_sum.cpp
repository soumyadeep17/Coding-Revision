    // reduces to subset sum problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int sum_vec(vector<int> v)
    {
        int summ = 0;
        for(auto x: v)
        {
            summ = summ+x;
        }
        return summ;
    }
    void subset_sum_array(vector<int> v, int i , int curr_sum,int &count, int new_target)
    {
        if (curr_sum == new_target)
        {
            count++;
            return;
        }
        if (curr_sum<new_target && i<v.size())
        {
            subset_sum_array(v,i+1,curr_sum+v[i],count,new_target);
            subset_sum_array(v,i+1,curr_sum,count,new_target);
        }
        return;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count = 0;
        int sum = sum_vec(nums);
        int new_target = sum+target;
//         cout<<new_target;
//         if (new_target%2 == 1)
//             return 0;
        
        
//         if (nums.size() == 1)
//         {
//             if (nums[0] == target)
//                 return 1;
//         }
        
        
//         if (sum_vec(nums)<target)
//             return 0;
        
        
//         if(nums[0] == new_target)
//             count = 1;
        
        
        subset_sum_array(nums,0,0,count,new_target);
        return count;
        
    }
int main()
{
    int count = 0;
    subset_sum_array({1,1,1,1,1},0,0,count,4);
    cout<<count;
    vector<int> v1;
    vector<int> v2;
    for(auto x,y : v1,v2)
    {
        cout<<x<<y;
    }
} // namespace std