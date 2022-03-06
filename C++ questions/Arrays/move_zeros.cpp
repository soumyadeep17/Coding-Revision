    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
    
    void moveZeroes(vector<int>& nums) 
    {
        vector<int>::iterator it;
        it = nums.begin();
        int i = 0;
        int j = 0;
        while (j<nums.size())
        {
            if (nums[i] == 0)
            {
                nums.erase(it);
                nums.push_back(0);
            }
            else
            {
                i++;
                it++;
            }
            j++;
        }
    }
    void moveZeroes2(vector<int>& nums) 
    {
        int i = 0;
        for(int j = 0 ; j<nums.size();j++){
            if (nums[j]!=0)
            {swap(nums[j],nums[i]);
            i++;}

        }
    }
    int main(){

    }