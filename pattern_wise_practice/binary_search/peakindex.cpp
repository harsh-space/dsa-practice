#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>&arr){
    int i=0,j=arr.size()-1;
    while(i<j){
        int m=i+(j-i)/2;
        if(arr[m]>arr[m+1]){
            j=m;
        }
        else i=m+1;
    }
    return i;
}
 
int main(){
    vector<int>num={0,1,2,0};
    cout<<peak(num);
    return 0;
}