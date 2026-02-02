#include<bits/stdc++.h>
using namespace std;

// bool check_mountain(vector<int>&num){
//     if(num.size()<3)return false;
//     int ct=0;
//     for(int i=1;i<num.size()-1;i++){
//         if(num[i]>num[i+1] && num[i]>num[i-1])ct++;
//     }
//     if(ct>1 || ct==0)return false;
//     return true;
// }

bool check_mountain(vector<int>& num) {
    int n = num.size();
    if (n < 3) return false;

    int i = 0;
    while (i + 1 < n && num[i] < num[i + 1]) {
        i++;
    }
    if (i == 0 || i == n - 1) return false;
    while (i + 1 < n && num[i] > num[i + 1]) {
        i++;
    }

    return i == n - 1;
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
    if(check_mountain(num)){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
    return 0;
}