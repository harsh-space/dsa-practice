#include<bits/stdc++.h>
using namespace std;
bool validparenthesis(string &s){
    unordered_map<char,char>mp{
        {')','('},
        {'}','{'},
        {']','['}
    };
    stack<char>stk;
    for(char ch:s){
        if(ch=='(' || ch=='{' || ch=='['){
            stk.push(ch);
        }
        else{
            if(stk.empty())return false;
            if(stk.top()!=mp[ch])return false;
            stk.pop();
        }
    }
    return stk.empty();
}
int main(){
    string s1="({[]})";
    string s2="()[}]";
    string ans=validparenthesis(s1)?"Valid":"Not Valid";
    string ans2=validparenthesis(s2)?"Valid":"Not Valid";
    cout<<ans<<endl;
    cout<<ans2;
    return 0;
}