#include <bits/stdc++.h>
using namespace std;

int dp[501][501];
int solves(int i, int j, string &word1, string &word2)
{
    if (i == word1.size() || j == word2.size())
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (word1[i] == word2[j])
        return dp[i][j] = 1 + solves(i + 1, j + 1, word1, word2);
    return dp[i][j] = max(solves(i + 1, j, word1, word2), solves(i, j + 1, word1, word2));
}
int minDistance(string word1, string word2)
{
    for (int i = 0; i < 501; i++)
    {
        for (int j = 0; j < 501; j++)
        {
            dp[i][j] = -1;
        }
    }
    int l = solves(0, 0, word1, word2);
    return word1.size() + word2.size() - 2 * l;
}

int main()
{
    string s="leetcode";
    string r="etco";
    cout<<minDistance(s,r);
    return 0;
}