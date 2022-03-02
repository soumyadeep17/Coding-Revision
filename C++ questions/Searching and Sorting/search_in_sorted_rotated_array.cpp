# include<iostream>
using namespace std;
int bin_search(int num[], int start, int end , int target)
{
        if (start == end){
            if (num[start] == target)
                return start;
            else
                return -1;
        }
        int mid = (end + start)/2;
        if (bin_search(num,start,mid,target) == -1)
            return bin_search(num,mid+1,end,target);
        else
            return bin_search(num,start,mid,target);
}
int main()
{
    int arr[] = {1,2,5,6,7,3,4};
    int target = 5;
    cout<<bin_search(arr,0,3,target);
} // namespace std

  
