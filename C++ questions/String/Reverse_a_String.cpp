#include <iostream>
#include <algorithm>
using namespace std;

void reverse_string(char string[] , int n){
    int start  = 0;
    int end = n-1;
    while(start<end){
        swap(string[start++],string[end--]);
    }
}

int main()
{
    char x[30];
    cin>>x;
    reverse_string(x,12);
    cout<<x<<endl;
    return 0;
}