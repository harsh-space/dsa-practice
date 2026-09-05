#include<bits/stdc++.h>
using namespace std;

int editdist(int i,int j,int m,int n,string &s,string&r){
    if(j<0)return i+1;
    if(i<0)return j+1;
    if(s[i]==r[j])return editdist(i-1,j-1,m,n,s,r);
    // string ns=s+r[j];
    return 1+min({editdist(i-1,j-1,m,n,s,r),editdist(i,j-1,m,n,s,r),editdist(i-1,j,m,n,s,r)});
}

int main(){
    string a="horse";
    string b="rose";
    int m=a.size();
    int n=b.size();
    cout<<editdist(m-1,n-1,m,n,a,b);
    return 0;
}