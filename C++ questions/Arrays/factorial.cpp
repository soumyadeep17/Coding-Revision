#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void print_arr(vector<int> v)
{
    int i = 0;
    while(i<v.size())
       cout<<v[i++];
    cout<<endl;
}  
        
void mult(vector<int> &x, int n){
    int i = 0;
    int carry = 0;
    int mul = 1;
    int digit = 0;
    while(i<x.size())
    {
        mul = n*x[i];
        digit = (mul + carry)%10;
        x[i] = digit;
        carry = (mul +carry)/10;
        i++;
    }
}  
int findDigits(int n)
{
    // factorial exists only for n>=0
    if (n < 0)
        return 0;
 
    if (n <= 1)
        return 1;
    double digits = 0;
    for (int i=2; i<=n; i++)
        digits += log10(i);
 
    return floor(digits)+1;
}   
vector<int> fact(int n)
{
    vector<int> x(findDigits(n),0);
    x[0] = 1;
    for (int  i =2; i <= n ;i++)
        mult(x,i);
    return x;
}
int main()
{
    
    vector<int> x = fact(897);
    reverse(x.begin(),x.end());
    print_arr(x);
    return 0;
}