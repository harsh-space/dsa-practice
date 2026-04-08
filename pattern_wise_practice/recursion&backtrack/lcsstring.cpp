#include<bits/stdc++.h>
using namespace std;


string lcs(string p,string q,int n,int m){
    if(n==0 || m==0 ){
        return "";
    }
    
    if(p[n-1]==q[m-1]){
        return lcs(p,q,n-1,m-1)+p[n-1];
    }
    else{
        string s1=lcs(p,q,n-1,m);
        string s2=lcs(p,q,n,m-1);
        return (s1.size()>s2.size())?s1:s2;
    }

}
int main(){
    string p="abcde",q="ace";
    // vector<vector<int>> arr(p.size() + 1, vector<int>(q.size() + 1, -1));
    
    cout<<lcs(p,q,p.size(),q.size());
    return 0;
}