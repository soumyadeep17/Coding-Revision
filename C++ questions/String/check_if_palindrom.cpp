#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrom(char s[] , int n){
    int start  = 0;
    int end = n-1;
    // bool x =
    while(start<end){
        if (s[start] != s[end])
        return false;
        else
        {
            start++;
            end--;
        }
    }
    return true;
}
// Coding NInja Q and Leetcode
int getAscii(char c)
{
	int i = c;
	return c;
}
bool checkPalindrome(string s)
{
    for(int i = 0; i<s.size(); i++)
	{
		int x = getAscii(s[i]);
		if  ((x>=48 && x<58) || (x>=65 && x<91) || (x>=97 && x<123))
			continue;
		else
		{
			s.erase(s.begin()+i);
			i--;
		}
	}
	int j = 0;
	int k = s.size() - 1;
	bool flag = true;
	while(j<k)
	{
		if (tolower(s[j])!=tolower(s[k]))
		{
// 			cout<<s[j]<<s[k]<<endl;
			flag = false;
			break;
		}
		j++;
		k--;
	}
	return flag;
}
//
int main()
{
    char x[30];
    cin>>x;
    
    cout<<isPalindrom(x,12)<<endl;
    return 0;
}