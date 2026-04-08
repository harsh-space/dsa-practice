#include<bits/stdc++.h>
using namespace std;


int helper(string p,string q,int m,int n){
    if(m==0)return n;
    if(n==0)return m;

    if(p[m-1]==q[n-1]){
        return 1+helper(p,q,m-1,n-1);
    }

    else return 1+min(helper(p,q,m-1,n),helper(p,q,m,n-1));
}
int main(){
    string s="geek";
    string r="eke";
    cout<<helper(s,r,s.size(),r.size());
    return 0;
}