#include<bits/stdc++.h>
using namespace std;

int subsum(vector<int>& arr, int k) {
    int csum = 0, ans = 0;
    int i = 0;
    
    for (int j = 0; j < arr.size(); j++) {
        csum += arr[j];

        while (csum > k && i <= j) {
            csum -= arr[i];
            i++;
        }
        
      
        if (csum == k) {
            ans++;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={1,2,3};
    int k=3;
    cout<<subsum(arr,k);
    return 0;
}