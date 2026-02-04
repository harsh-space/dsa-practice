#include<bits/stdc++.h>
using namespace std;
void prefixsum(vector<int>&num){
    if(num.size()<1){
        cout<<"NULL";
        return ;
    }
    int sum=0;
    for(int i=0;i<num.size();i++){
        sum+=num[i];
        num[i]=sum;
        
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>num;
    while(n--){
        int elel;
        cin>>elel;
        num.push_back(elel);

    }
    cout<<"Running sum:";
    prefixsum(num);
    
    for(int i:num){
        cout<<i<<" ";
    }
    return 0;
}