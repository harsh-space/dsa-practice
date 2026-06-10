#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums={0,1,0,1,1,0,0};
    int cnt=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1)cnt++;
    }
    int wind0=0,minswap=INT_MAX;
    int i=0,j=cnt-1;
    for(int k=i;k<=j;k++){
        if(nums[k]==0)wind0++;
    }
    minswap=min(wind0,minswap);
    while(i<nums.size()-1){
        if(nums[i]==0){
            wind0--;
        }
        int nj=(j+1)%nums.size();
        if(nums[nj]==0){
            wind0++;
        }
        minswap=min(minswap,wind0);
        i++,j++;
    }
    cout<<minswap;

    
    return 0;
}