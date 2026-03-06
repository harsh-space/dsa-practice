#include<bits/stdc++.h>
using namespace std;
int maxprofit(vector<int>&arr){
    int mxp=0;
    int lm=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<lm){
            lm=arr[i];
            mxp=0;
        }
        else{
            mxp=max(mxp,arr[i]-lm);
        }
    }
    return mxp;
}
int main(){
    vector<int>arr={7,6,4,3,1};
    cout<<maxprofit(arr);
}