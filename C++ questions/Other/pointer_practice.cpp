#include <iostream>
using namespace std;
int main(){
// {   int num = 100;
//     int *ptr = &num;// ptr is adress of num and *ptr is num
//     int **ptr1 = &ptr;// ptr1 is adress of ptr and *ptr1 is ptr and ** ptr1 is num
//     cout<<**ptr1<<endl; // *(*ptr1) --> value at(value at address offptr1) --> *(ptr) --> value at adress ptr --> num
    // int *p;
    // int a = 5;
    // *p = 10;
    // cout<<a+8;
    // float f = 10.5;
    // float p = 2.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p;
    // int a = 7;
    // int b = 17;
    // int *c = &b; 
    // a = *c;
    // *c = *c + 1;
    // cout  << a << "  " << b << endl;
    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout  << a << "  " << b << endl;
    int *ptr = 0;
    int a = 10;
    *ptr = a;
    cout << *ptr << endl;
    return 0;
} // namespace std
