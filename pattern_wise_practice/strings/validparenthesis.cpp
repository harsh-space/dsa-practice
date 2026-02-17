#include <bits/stdc++.h>
using namespace std;
unordered_map<char, char> mp
{
    {')', '('},
    {'}', '{'},
    {']', '['}
};
bool checkvalid(string &s)
{
    stack<int>stk;

    for(char c:s){
        if(c=='('||c=='{'||c=='['){
            stk.push(c);
        }
        else{
            if(stk.empty())return false;
            if(stk.top()!=mp[c])return false;
            stk.pop();
        }
    }
    return stk.empty();
}
int main(){
    string s1="({[]})";
    string s2="()[}]";
    string ans=checkvalid(s1)?"Valid":"Not Valid";
    string ans2=checkvalid(s2)?"Valid":"Not Valid";
    cout<<ans<<endl;
    cout<<ans2;
}