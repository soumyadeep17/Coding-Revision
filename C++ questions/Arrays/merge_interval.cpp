#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> x;
    x.push_back(intervals[0]);
    int i = 0;
    int j = 1;
while(j<intervals.size())
{
    if (x[i][1]>=intervals[j][0])
    {
    x[i][0] = min(x[i][0],intervals[j][0]);
    x[i][1] = max(x[i][1],intervals[j][1]);
    j++;
    }
    else
    {
    x.push_back(intervals[j]);
    i++;
    }

}
        return x;
    }
//         if(intervals.size() == 1)
//         return intervals;
//         if (intervals[0][1]>=intervals[1][0])
//         {
//             vector<vector<int>> temp = {{intervals[0][0], intervals[1][1]}};
//         // intervals.pop_front()
//         // intervals.pop_front()
//             for (int i = 2; i<intervals.size(); i++)
//             temp.push_back(intervals[i]);
//             return merge(temp);
//         }
//         vector<vector<int>> temp1;
//         vector<vector<int>> temp2 = {intervals[0]};
//         for (int i =1 ;i<intervals.size();i++)
//             temp1.push_back(intervals[i]);
//         vector<vector<int>> temp3 = merge(temp1);
//         for (int i = 0; i<temp3.size(); i++)
//             temp2.push_back(temp3[i]);
//         return temp2;
//     }
int main(){
    vector<vector<int>> intervals = {{1,2},{2,3},{4,6}};
    vector<vector<int>> x = merge(intervals);
    cout<< x.size();

}