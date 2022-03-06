#include <iostream>
using namespace std;
int count_squares(int num){
    int n = 1;
    while(num>=0)
    {
    num = num - (2*n-1);
    n++;
    }
    return  n-2;
}
int main()
{
    cout<<count_squares(1000);
} // namespace std
