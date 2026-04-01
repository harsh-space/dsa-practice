#include<bits/stdc++.h>
using namespace std;
int count(vector<int>&coin,int n,int s,vector<vector<int>> &arr){
    if(s==0)return 1;
    if(s<0||n==0)return 0;
    if(arr[n][s]!=-1)return arr[n][s];
    return arr[n][s]=count(coin,n-1,s,arr)+count(coin,n-1,s-coin[n-1],arr);

}
int main(){
    int s=4;
    vector<int>coin={1,2,3};
    int n=coin.size();
    vector<vector<int>> arr(n + 1, vector<int>(s + 1, -1));
    cout<<count(coin,coin.size(),s,arr);
    return 0;
}