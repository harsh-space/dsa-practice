#include<bits/stdc++.h>
using namespace std;

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
    vector<int>even;
    vector<int>odd;
    for(int i:num){
        if(i%2==0)even.push_back(i);
        else odd.push_back(i);
    }
    cout<<"Even section :"<<endl;
    for(int i:even){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Odd section :"<<endl;
    for(int i:odd){
        cout<<i<<" ";
    }
    return 0;
}