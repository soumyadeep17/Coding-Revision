// reference variable
#include <iostream>

// IMP --> just to differentiate (if & is with int operator it is reference wala[int& x = j]) (if & is with variable matlab adress [int x = &j])
using namespace std;
// int main()
// {
//     int i = 5; // j is not reference variable
//     int j = i;
//     cout<< &i <<" "<<&j<<endl; // different values because different adress blocks --> do block(alag adress) ke same nam
//     int &k = i; // k is a reference variable
//     cout<< &i <<" "<<&k<<endl; // same values because same adress block --> ek hi block ke do nam
// } // namespace std

void pass_by_value(int n)
{
    n++;
}
void pass_by_reference(int& n) // --> reference variable and not passing adress VVI
{
    n++;
}
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}
int* fun(int a){
    int *ptr = &a;
    return ptr;
}

int main()
{
    int n = 5;
    int y;
    int *ptr;
    cout<<n<<endl;// --> value of n

    pass_by_value(n);
    cout<<n<<endl;// --> did not increase as pass_by_value created a copy of the variable and increases (applies the function to) the copy variable and not the original varible

    pass_by_reference(n);
    cout<<n<<endl;//--> increased as pass_by_reference doesnt copy , instead we are passing the same block using different name
    // therefore use pass_by_reference preferably in functions.

    y = func(n);
    cout<<y<<endl;

    ptr = fun(n);
    cout<<ptr<<endl;
    
    cout<<*ptr<<endl;

}