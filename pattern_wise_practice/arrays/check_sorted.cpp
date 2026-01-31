#include<bits/stdc++.h>
using namespace std;
//order checcked is non-decreasing
int check_sorted(vector<int>&n){
    bool flag=true;
    for(int i=0;i<n.size()-1;i++){
        if(n[i]>n[i+1]){
            flag=false;
            break;
        }
    }
    if(flag)return 1;
    return 0;
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
    string ans=check_sorted(num)==1?"Yes":"No";

    cout<<"Array is sorted ?"<<ans<<endl;

}