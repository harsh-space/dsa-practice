#include<bits/stdc++.h>

using namespace std;

int lcs(string p,string q,int m,int n){
    if(m==0 || n==0)return 0;

    if(p[m-1]==q[n-1]){
        return 1+lcs(p,q,m-1,n-1);
    }

    return max(lcs(p,q,m-1,n),lcs(p,q,m,n-1));
}

int main(){
    string s="heap";
    string r="pea";
    cout<<(s.size()+r.size())-2*lcs(s,r,s.size(),r.size());
    return 0;
}