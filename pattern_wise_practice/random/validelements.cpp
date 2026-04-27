#include <bits/stdc++.h>
using namespace std;

vector<int> findValidElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> left(n, 0);
    vector<int> right(n, 0);

    int mx = -1;
    for (int i = 0; i < n; i++) {
        mx = max(nums[i], mx);
        left[i] = mx;
    }

    mx = -1;
    for (int i = n - 1; i >= 0; i--) {
        mx = max(nums[i], mx);
        right[i] = mx;
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if ((i == 0 || nums[i] > left[i - 1]) || 
            (i == n - 1 || nums[i] > right[i + 1])) {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 3, 2, 5, 4};

    vector<int> result = findValidElements(nums);

    cout << "Valid elements: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}