#include <iostream>
using namespace std;

bool powerOfTwo(int a)
{
    if (a == 1)
        return true;
    if (a % 2 == 1)
        return false;
    // if (a%2 == 0)
    return powerOfTwo(a / 2);
}

int main()
{
    cout << powerOfTwo(256);
}
