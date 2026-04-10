#include<bits/stdc++.h>
using namespace std;
int helper(string s,string r,int p,int q){
    if(p==0 ||q==0)return 0;
    if(s[p-1]==r[q-1])return 1+helper(s,r,p-1,q-1);
    return max(helper(s,r,p-1,q),helper(s,r,p,q-1));
}
int main(){
    string s="leetcode";
    string r="edocteel";
    cout<<s.size()-helper(s,r,s.size(),r.size());
    return 0;
}