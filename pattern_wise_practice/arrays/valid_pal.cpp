#include<bits/stdc++.h>
using namespace std;
bool valpal(vector<int>&nums){
    int i=0,j=nums.size()-1;
    while(i<j){
        if(nums[i]!=nums[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>num;
    while(n--){
        int ele;
        cin>>ele;
        num.push_back(ele);

    }
    bool ans=valpal(num);
    if(valpal(num)){
        cout<<"Valid palindrome";
        return 0;
    }
    cout<<"Not valid palindrome";
    return 0;
}