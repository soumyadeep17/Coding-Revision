#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int summ(vector<int> v, int i , int j)
{
    int addition = 0;
    while(i<j)
    addition = addition + v[i];
    return addition;
}
void x(vector<int>v,vector<int> w,int start,int end,int curr_sum,int  t, int &maxx)
{
    if (curr_sum>t)
    return;
    if (curr_sum<=t && start<end)
    {
        maxx = max(maxx,summ(v,start,end));
        x(v,w,start+1,end, curr_sum + w[start],t,maxx);
        x(v,w,start+1,end, curr_sum,t,maxx);
    }
}
int main()
{
    vector<int> v = {60,100,120};
    vector<int> w = {10,20,30};
    int maxx = 0;
    x(v,w,0,v.size(),0,50,maxx);



}