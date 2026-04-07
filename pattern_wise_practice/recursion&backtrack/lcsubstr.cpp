#include<bits/stdc++.h>
using namespace std;

int commonsuff(string p,string q,int n,int m){
    if(n==0 || m==0 || p[n-1]!=q[m-1]){
        return 0;
    }
    return 1+commonsuff(p,q,n-1,m-1);
}
int lcs(string p,string q,int n,int m){
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            res=max(res,commonsuff(p,q,i,j));
        }
    }
    return res;

}
int main(){
    string p="agh",q="agh";
    vector<vector<int>> arr(p.size() + 1, vector<int>(q.size() + 1, -1));
    cout<<lcs(p,q,p.size(),q.size());
    // cout<<arr[p.size()][q.size()];
    return 0;
}