#include<bits/stdc++.h>
using namespace std;
int missingnum(vector<int>&num){
    vector<int>hash(num.size(),0);
    for(int i:num){
        hash[i]=1;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[i]==0)return i;
    }
    return -1;
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
    int ans=missingnum(num);
    cout<<"Missing number is:"<<ans;
}