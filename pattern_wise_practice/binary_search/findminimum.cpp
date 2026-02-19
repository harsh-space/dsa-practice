#include<bits/stdc++.h>
using namespace std;

int findmin(vector<int>&arr){
    int i=0,j=arr.size()-1;
    while(i<j){
        int m=i+(j-i)/2;
        if(arr[j]<arr[m]){
            i=m+1;
        }
        else if(arr[m]<arr[j]){
            j=m;
        }
        else j--;
    }
    return arr[i];

}
int main(){
    vector<int>num={0,1,2,-1,0};
    cout<<findmin(num);
    return 0;
}