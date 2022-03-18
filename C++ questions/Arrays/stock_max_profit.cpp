#include <iostream>
#include <vector>
using namespace std;
    
    int maxProfit(vector<int>& prices) {
        if (prices.size()== 1)
            return 0;
        int i = 1;
        int min_ele = prices[0];
        int max_diff = prices[1] - prices[0];
        for(int i = 1; i<prices.size(); i++){
            if (prices[i]<min_ele)
                min_ele = prices[i];
            if (prices[i] - min_ele >max_diff)
                max_diff = prices[i] - min_ele;
        }
        if (max_diff<0)
            return 0;
        else
            return max_diff;
    }