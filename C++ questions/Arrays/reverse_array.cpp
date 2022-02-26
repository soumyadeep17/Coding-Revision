// Write a program to reverse an array or string

#include <iostream>
using namespace std;
void printarray(int arr[], int arrSize){
    for (int i = 0 ; i< arrSize; i++){
        cout<<arr[i]<<' ';
    }
}
void revarray(int arr[],int arrSize){
    int temp;
    for(int i = 0;i <arrSize/2;i++){
    temp = arr[i];
    arr[i] = arr[arrSize-1-i];
    arr[arrSize-1-i] = temp;
  }
  return printarray(arr,arrSize) ;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    revarray(arr, arrSize);
    return 0;
}
