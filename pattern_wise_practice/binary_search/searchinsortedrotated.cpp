#include<bits/stdc++.h>
using namespace std;
bool findn(vector<int>&arr,int &k){
    int i=0,j=arr.size()-1;
    while(i<=j){
        int m=i +(j-i)/2;
        if(arr[m]==k)return true;

        if(arr[i]<=arr[m]){
            if(arr[i]<=k && arr[m]>=k){
                j=m-1;
            }
            else i=m+1;
        }
        else {
            if(arr[m]<=k && k<=arr[j]){
                i=m+1;
            }
            else j=m-1;
        }
    }
    return false;
}
int main(){
    vector<int>a={5,6,7,1,2,3,4};
    int k=6;
    if(findn(a,k))cout<<"Found!!";
    else cout<<"Not found!!";
    return 0;
}