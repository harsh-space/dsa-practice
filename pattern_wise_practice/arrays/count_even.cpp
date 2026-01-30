#include<bits/stdc++.h>
using namespace std;

int even_cout(vector<int>&nums){
    int cnt=0;
    for(int i:nums){
        if(i%2==0)cnt++;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>nums;
    nums.reserve(n);
    while(n--){
        int ele;
        cin>>ele;
        nums.push_back(ele);
    }
    cout<<"Number of even are:"<<even_cout(nums)<<endl;
    return 0;
}