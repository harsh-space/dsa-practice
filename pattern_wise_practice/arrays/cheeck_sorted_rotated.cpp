#include<bits/stdc++.h>
using namespace std;
//order checcked is non-decreasing
string check_sorted(vector<int>&n){
    int flag=0;
    for(int i=0;i<n.size()-1;i++){
        if(n[i]>n[i+1]){
            flag++;
        }
    }
    if(flag<=1)return "yes";
    return "No";
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
    string ans=check_sorted(num);

    cout<<"Array is sorted & rotated?"<<ans<<endl;

}