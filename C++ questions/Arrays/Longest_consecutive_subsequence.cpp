#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;




int main(){
    vector <int> v  = {6, 6, 2, 3 ,1 ,4 ,1 ,5 ,6 ,2 ,8, 7, 4, 2, 1, 3, 4, 5, 9, 6};
    sort(v.begin(),v.end());
    vector<int> v1;
    int i = 0;
    while(i<v.size()-1)
    {v1.push_back(v[i]-v[i+1]);
    i++;}
    int count  = 0;
    int j = 0;
    int max_count = 0;
    while(j<v1.size())
    {
        if (v1[j] == -1 || v1[j]==0)
        {
            if (v1[j] == -1)
            {count++;}
            if (count>max_count)
                max_count = count;
        }
        else
            count = 0;
        
        j++;
    }
    cout<<max_count+1;
}

