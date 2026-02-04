#include <bits/stdc++.h>
using namespace std;
void prefixsum(vector<int> &num)
{
    if (num.size() < 1)
    {
        cout << "NULL";
        return;
    }
    int sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i];
        num[i] = sum;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int original_n = n;
    vector<int> num;
    num.reserve(n); 
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        num.push_back(ele);
    }
    prefixsum(num);
    int t;
    cin >> t;
    while (t--) {
        int left, right;
        cin >> left >> right;
        if (left < 0 || right >= n || left > right) {
            cout << "Invalid Range" << endl;
            continue;
        }
        int ans = (left == 0) ? num[right] : num[right] - num[left - 1];
        cout << "Sum:" << ans << endl;
    }
    return 0;
}