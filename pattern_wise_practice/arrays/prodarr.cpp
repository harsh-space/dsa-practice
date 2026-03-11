#include <bits/stdc++.h>
using namespace std;
vector<int> proarr(vector<int> &arr) {
    long long pro = 1;
    int n = arr.size();
    int zcnt = count(arr.begin(), arr.end(), 0);

    for (auto it : arr) {
        if (it != 0) pro *= it;
    }

    vector<int> ans(n, 0);

    if (zcnt > 1) return ans; 

    if (zcnt == 1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) ans[i] = pro; 
        }
    } else {
        for (int i = 0; i < n; i++) {
            ans[i] = pro / arr[i]; 
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};
    vector<int> ans = proarr(arr);
    for (auto it : ans)
        cout << it << " ";
    return 0;
}