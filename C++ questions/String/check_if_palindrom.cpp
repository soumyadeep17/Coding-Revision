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

int main()
{
    char x[30];
    cin>>x;
    
    cout<<isPalindrom(x,12)<<endl;
    return 0;
}