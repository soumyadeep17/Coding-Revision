#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<int> nums)
{
    for (int i = 0; i< nums.size(); i++)
    {
        cout<<nums[i];
    }
}
int main(){
    // numsector<int> nums = {3,2,1}; 
    vector<int> nums = {4,1,3,5,2};
    int i = (nums.size() - 1) - 1;
    while (i>=0)
    {
        if (nums[i]<nums[i+1])
        {

            break;
        }
        i--;
    }
    reverse(nums.begin() + i + 1, nums.end());
    for (int j = i + 1; j< nums.size() &&i>=0; j++)
    {
        if (nums[j]>nums[i])
        {
        swap(nums[i],nums[j]);
        break;
        }
    }
        
    print_vector(nums);
    return 0;
}


