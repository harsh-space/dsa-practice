#include<bits/stdc++.h>
using namespace std;
int dupnum(vector<int>&arr){
    for(int i=0;i<arr.size();){
        int n=arr[i];
        if(n==i+1){
            i++;
        }
        else if(n==arr[n-1])return n;
        else swap(arr[i],arr[n-1]);
    }
    return 0;
}
int main(){
    vector<int>arr={1,3,4,2,2};
    cout<<dupnum(arr);
    return 0;
}