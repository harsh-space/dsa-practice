#include <bits/stdc++.h>
using namespace std;

int halveArray(vector<int> &nums)
{
    priority_queue<double> maxh;
    double s = 0;
    for (auto i : nums)
        maxh.push(double(i)), s += double(i);
    int cnt = 0;
    double th = s / 2;
    while (s > th)
    {
        double t = maxh.top();
        s -= t / 2;
        maxh.pop();
        maxh.push(t / 2);
        cnt++;
    }
    return cnt;
}

int main()
{
    vector<int> nums = {5, 19, 8, 1};
    cout << halveArray(nums);
    return 0;
}