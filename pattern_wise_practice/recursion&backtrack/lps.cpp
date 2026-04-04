#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001];

int helper(string s, int i, int j)
{
    if (i > j)
        return 0;
    
    if (i == j)
        return 1;
    if(arr[i][j]!=-1)return arr[i][j];
    if (s[i] == s[j])
    {
        return arr[i][j]=2 + helper(s, i + 1, j - 1);
    }
    return arr[i][j]=max(helper(s, i + 1, j), helper(s, i, j - 1));
}
int main()
{
    string s = "aabcdeecdar";
    for (int i = 0; i < 1001; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            arr[i][j] = -1;
        }
    }
    helper(s, 0, s.size() - 1);
    cout << arr[0][s.size() - 1];
    return 0;
}