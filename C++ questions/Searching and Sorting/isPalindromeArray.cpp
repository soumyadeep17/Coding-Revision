#include<iostream>
#include<algorithm>
#include<string>
#include <bits/stdc++.h>
using namespace std;
    int count_digits(int x)
    {
        int count = 0;
        while(x != 0)
        {
            x = x/10;
            count++;
        }
        return count;
    }
    
    bool isPalindrome(int x){
        int digits = count_digits(x);
        int i = 1;
        int j = digits - 1;
        int store = x;
        int rem = 0;
        int res = 0;
        if (x == 0)
        return true;
        if(x%10 == 0)
        return false;
        while(x!=0)
        {
        rem = x%10;
        res = res + rem*pow(10,j);
        x = x/10;
        j--;
        }
        bool flag = (res == store)?true:false;
        return flag;
    }
    int PalinArray(int a[], int n)
    {
        int i = 0 ;
    	while(i<n){
    	    if (!isPalindrome(a[i]))
    	        break;
                i++;
    	}
    	int x = (i<n)? 0: 1;
        return x;
    }
    int main()
    {
        int a[3] = {121,131,20};
        cout<<PalinArray(a,3)<<endl;
        char i = 'A';
        cout<<tolower('A')<<endl;
    }