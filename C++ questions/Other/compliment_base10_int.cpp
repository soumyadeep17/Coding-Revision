# include<iostream>
using namespace std;

int bitwiseComplement(int n){
    int m = n;
    int mask = 0;
    int ans = 0;
    // edgecase
    if (n==0)
    return 1;
    while(m!=0)
    {
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    ans = ~n & mask;
    return ans;
}

int main(){
    cout<<bitwiseComplement(10);
}