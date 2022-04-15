#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto x:nums)
        {
            umap[x]++;
        }
        sort(nums.begin(), nums.end(),[&](int a, int b){return umap[a] == umap[b]?a>b:umap[a]<umap[b];});
        return nums;
    }
};