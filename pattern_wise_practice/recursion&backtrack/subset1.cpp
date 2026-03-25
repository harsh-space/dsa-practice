#include<bits/stdc++.h>
using namespace std;
void helper(int i,vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
    if(i==arr.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[i]);
    helper(i+1,arr,temp,ans);
    temp.pop_back();
    helper(i+1,arr,temp,ans);
}
int main(){
    vector<int>n={1,2,3};
    vector<int>temp;
    vector<vector<int>>ans;
    helper(0,n,temp,ans);
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}