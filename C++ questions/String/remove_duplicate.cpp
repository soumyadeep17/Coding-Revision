#include <iostream>
#include <string>
using namespace std;
string remove_dup(string s){
        int i = 0;
        while(i<s.size()-1)
        {
            if (s.size() == 1 || s.size() == 0)
            break;
            if(s[i] == s[i+1])
            { 
                s.erase(s.begin()+i, s.begin()+i+2);
                i = 0;
                continue;
                }
            else
                i+=1;
        }
        return s;
        
    }
string removeDuplicates(string s) {
    int i = 0;
    string ans= "";
    for (int i = 0;i<s.size();i++)
    {
        if(ans.back()!=s[i])
            ans.push_back(s[i]);
        else
            ans.pop_back();
    }
    return ans;
}
        
    
int main()
{
    string s ="abbaca";
    string l = "1";
    cout<<removeDuplicates(s)<<endl;

}