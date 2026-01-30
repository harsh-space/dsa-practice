#include <bits/stdc++.h>
using namespace std;
int largest_element(vector<int>& nums) {
    if (nums.empty()) return -1;
    int n = INT_MIN;
    for (int i : nums) n = max(i, n);
    return n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;  
    vector<int> nums;
    nums.reserve(n);
    while (n--) {
        int ele;
        cin >> ele;
        nums.push_back(ele);
    }
    int ans = largest_element(nums);
    cout << "Largest element is: " << ans << endl;
    return 0;
}