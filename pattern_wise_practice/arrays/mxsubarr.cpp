#include<bits/stdc++.h>
using namespace std;
 
vector<int> subarr(vector<int>&arr){
    
    int s=0,maxsum=INT_MIN;
    int st=0,en=0,tst=0;
    for(int i=0;i<arr.size();i++){
        s+=arr[i];
        if(s>maxsum){
            maxsum=s;
            st=tst;
            en=i;
        }
        if(s<0){
            tst=i+1;
            s=0;
        }
    }
    vector<int>ans(arr.begin()+st,arr.begin()+en+1);
    return ans;
}
int main()
{
    vector<int>a={-2,1,-3,4,-1,2,1,-5,4};
    vector<int>ans=subarr(a);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}