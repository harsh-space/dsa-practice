#include<bits/stdc++.h>
using namespace std;

int hrob(vector<int>&arr,int n){
    if(n>=arr.size())return 0;
    int t=arr[n]+hrob(arr,n+2);
    int l=hrob(arr,n+1);
    return max(t,l);
}
int main(){
    vector<int>arr={10,12,14,16,18};
    cout<<hrob(arr,0);
    return 0;
}