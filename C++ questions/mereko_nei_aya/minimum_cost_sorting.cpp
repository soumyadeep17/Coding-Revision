/*Problem Statement
You are given an array of ‘N’ integers and your task is to sort the array using the following operations.
In one operation you can select a sub-array of the array and sort it. The cost of performing such an operation will be the square of the length of the sub-array you are sorting.
You task is to find the minimum cost of sorting the whole array.
You are given,
array ARR=[4,3,2,1] 
So, the output is 16 as we can take the sub-array [4,3,2,1](from index 0 to index 4) and sort it. So the total cost is 4*4 (16). 

input = [2 3 1 6 4 5]
out = 18*/
#pragma GCC optimize ("-O3")
#include<iostream>
#include<algorithm>
#include <vector>
#include <array>
#include<unordered_map>
using namespace std;
int findCost(int n, vector<int> &a)
{ 
   vector<int> b = a;
   sort(b.begin(), b.end());
   int ans = 0;
   unordered_map <int,int> ma,mb;
   int i = 0;
   while(i < n){
       ma[a[i]]++; mb[b[i]]++;
       if(ma == mb){
           ma.clear(); mb.clear();
           i++;
           continue;
       }
    int currlen = 1;
       i++;
       while(i < n && ma != mb){
        ma[a[i]]++; mb[b[i]]++;
           i++;
           currlen++;
       }
       ans += (currlen * currlen);
       ma.clear(); mb.clear();
   }
   return ans;
}
int main()
{
    vector<int> input = {2,3,1,6,4,5};
    int x = findCost(6, input);
    cout<<x<<endl;
    return 0;

}