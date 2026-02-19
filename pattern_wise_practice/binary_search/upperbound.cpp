#include<bits/stdc++.h>
using namespace std;

int upperb(vector<int>&arr,int &target){
    int i=0,j=arr.size();
    while(i<j){
        int m=i+(j-i)/2;
        if(arr[m]>target){
            j=m;
        }
        else i=m+1;
    }
    return i;
}

int main(){
    vector<int>num={10, 20, 30};
    int target=5;
    cout<<upperb(num,target);
    return 0;
}