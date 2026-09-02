#include<bits/stdc++.h>
using namespace std;
int maxval(vector<int>&w,vector<int>&v,int W,int ptr){
    if(ptr>=w.size())return 0;
    // if(ptr==w.size()-1 && w[w.size()-1]<=W)return v[w.size()-1];
    int ntk=0+maxval(w,v,W,ptr+1);
    int tk=INT_MIN;
    if(w[ptr]<=W)tk=v[ptr]+maxval(w,v,W-w[ptr],ptr+1);
    return max(tk,ntk);
}
int main(){
    vector<int>w={2,5,7,8,9};
    vector<int>v={10,20,50,60,70};
    int W=15;
    cout<<maxval(w,v,W,0);
    return 0;
}