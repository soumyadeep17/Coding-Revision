#include <iostream>
using namespace std;
// hum normally stack se uthate hain memory but hum heap(dynamically) se bhi le sakte hain , by using a prefix "num"
int main()
{
    int a; //--> static allocation
    // new int b; --> dynamic allocation Aise nei kar sakte bhai
    int *ptr = new int; //--> ye hui na bat , ab hua hain dynamically allocate, but ha value to pointer se hi access karna padega.. or bhai pointer to STACK me hi hain bus point kar raha hain heap ke adress pe(samjhaa??)
    int n;
    cin>>n;
    int arr1[5] = {1,2,4,5}; //--> static mem allocated array
    int *arr = new int[n]; //--> ye hain dynamically allocated array of size n.(bhai pointer stack me hi hain, pata hain na??)


    while(1)
    int i = 5; // static allocated loop ke bahar apne aap free ho jata hain.
    /* while(1)
     int *ptr = new int;*/ // (new int) --> ye heap ka jo memory hain loop ke bad free nai hota , delete ptr use karna padega.
} // namespace std
