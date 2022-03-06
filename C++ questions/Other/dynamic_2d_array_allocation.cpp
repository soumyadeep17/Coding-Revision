#include <iostream>
using namespace std;
int main()
{
    // for 1-D array
    int *arr = new int[3];
    // for 2-D array (3*3)
    
    int **arr1 = new int*[3];
    for (int i = 0; i< 3;i++)
    {
        arr1[i] = new int[3];
    }
    /* 2d arrays me hum pehle 1d array of pointers banate hain
    phir each element of the array of pointers , points to the first element of the actual array
    visit link : https://www.techiedelight.com/dynamic-memory-allocation-in-c-for-2d-3d-array/ */
}