#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int>& arr) {
    int j = 0; 

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
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
    moveZeros(num);
    for(int i:num){
        cout<<i<<" ";
    }

    return 0;
}