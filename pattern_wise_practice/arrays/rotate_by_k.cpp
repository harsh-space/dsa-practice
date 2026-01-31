#include<bits/stdc++.h>
using namespace std;
void rotatearr(vector<int>&arr,int &k){
    k%=arr.size();
    vector<int>part;
    for(int i=0;i<k;i++)part.push_back(arr[i]);
    for(int i=k;i<arr.size();i++){
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++){
        arr[arr.size()-k+i]=part[i];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>num;
    while(n--){
        int ele;
        cin>>ele;
        num.push_back(ele);

    }
    rotatearr(num,k);
    for(auto it :num){
        cout<<it<<" ";
    }
    return 0;
}