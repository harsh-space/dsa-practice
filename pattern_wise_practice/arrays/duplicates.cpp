#include<bits\stdc++.h>
using namespace std;
int finddups(vector<int>&num){
    unordered_map<int,int>mp;
    for(int i:num){
        if(mp[i]+1>=2)cout<< i;
        mp[i]++;
    }
    return -1;
}
int main(){
        ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;  
    vector<int> nums;
    nums.reserve(n);
    while (n--) {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    finddups(nums);
    return 0;

}