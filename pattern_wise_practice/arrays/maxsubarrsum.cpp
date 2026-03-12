#include<bits/stdc++.h>
using namespace std;

int subarrsum(vector<int>&arr){
    int s=0,maxsum=INT_MIN;
    for(int i:arr){
        s+=i;
        maxsum=max(s,maxsum);
        if(s<0)s=0;
    }
    return maxsum;
}
int main()
{
    vector<int>a={5,4,-1,7,8};
    cout<<subarrsum(a);
    return 0;
}