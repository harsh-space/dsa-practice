#include <bits/stdc++.h>
using namespace std;

vector<int> sequentialDigits(int low, int high)
{
    string s = "123456789";
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            string temp = s.substr(i, j - i + 1);
            long long chk = stoll(temp);
            if (chk >= low && chk <= high)
            {
                ans.push_back(chk);
            }

            // else break;
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int low = 100, high = 300;
    vector<int> ans = sequentialDigits(low, high);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}