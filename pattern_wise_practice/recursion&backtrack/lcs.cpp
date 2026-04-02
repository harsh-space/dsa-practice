#include<bits/stdc++.h>
using namespace std;


int lcs(string p,string q,int n,int m,vector<vector<int>>&arr){
    if(n==0 || m==0 ){
        return 0;
    }
    if(arr[n][m]!=-1)return arr[n][m];
    if(p[n-1]==q[m-1]){
        return arr[n][m]=1+lcs(p,q,n-1,m-1,arr);
    }
    return arr[n][m]=max(lcs(p,q,n-1,m,arr),lcs(p,q,n,m-1,arr));

}
int main(){
    string p="abcde",q="ace";
    vector<vector<int>> arr(p.size() + 1, vector<int>(q.size() + 1, -1));
    lcs(p,q,p.size(),q.size(),arr);
    cout<<arr[p.size()][q.size()];
    return 0;
}