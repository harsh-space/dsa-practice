#include<bits/stdc++.h>
using namespace std;

vector<int> mergesorted(vector<int>&a,int &n,vector<int>&b,int &m){
    int i=0,j=0,k=0;
    vector<int>ans(n+m,0);
    while(i<n && j<m){
        if(a[i]<b[j]){
            ans[k]=a[i];
            k++;
            i++;
        }
        else if(b[j]<a[i]){
            ans[k]=b[j];
            k++;
            j++;
        }
        else {
            ans[k]=a[i];
            k++;
            i++;
        }
    }
    if(j!=m-1){
        while(j<=m-1){
            ans[k]=b[j];
            k++;
            j++;
        }
    }
    else if(i<=n-1){
        while(i!=n-1){
            ans[k]=a[i];
            i++;
        }
    }
    return ans;
}
int main(){
    vector<int>a={2,3,4,5,9,9,9};
    int n=7;
    vector<int>b={6,7,8,9,10,11,12,12,14};
    int m=9;
    vector<int>ans=mergesorted(a,n,b,m);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}