#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// input s1 and s2
// to check if s2 is rotated version of s1
// create s1+s1 and check is s2 is in s1
bool isSubset(string s1, string s2)
{
    for (int i = 0; i<=s1.size()-s2.size()+1; i++)
    {
        string temp = s1.substr(i,s2.size());
        if (temp == s2)
        {
            return true;
        }
    }
    return false;
    
}
bool isRotation(string s1, string s2)
{
    return isSubset(s1+s1, s2);
}
int main()
{
    string s1 = "aabcaa";
    string s2 = "aaabca";
    // bool x = s1 == s2;
    cout<<isRotation(s1,s2)<<endl;
}