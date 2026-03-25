#include<bits/stdc++.h>
using namespace std;

void helper(int i, vector<int>& arr, vector<int>& temp, vector<vector<int>>& ans) {
    
    ans.push_back(temp);
    
    for (int j = i; j < arr.size(); j++) {
        
        if (j > i && arr[j] == arr[j-1]) continue;
        
        temp.push_back(arr[j]);
        
        helper(j + 1, arr, temp, ans);
        
        temp.pop_back();
    }
}

int main() {
    vector<int> n = {1, 2, 2};
    sort(n.begin(), n.end()); 
    
    vector<int> temp;
    vector<vector<int>> ans;
    helper(0, n, temp, ans);
    
    for (auto it : ans) {
        if (it.empty()) cout << "{ }"; 
        for (int i : it) cout << i << " ";
        cout << endl;
    }
    return 0;
}