#include <iostream>
using namespace std;
bool isPrime(int num)
{
    
}
int count_primes(int num){
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
    cout<<isPrime(527);
} // namespace std
