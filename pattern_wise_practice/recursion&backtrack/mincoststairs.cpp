#include<bits/stdc++.h>
using namespace std;
int helper(int i,vector<int>&cost){
    if(i>=cost.size())return 0;
    return cost[i]+min(helper(i+1,cost),helper(i+2,cost));
}
int main(){
    vector<int>cost={1,100,1,1,1,100,1,1,100,1};
    cout<<min(helper(0,cost),helper(1,cost));
    return 0;
}