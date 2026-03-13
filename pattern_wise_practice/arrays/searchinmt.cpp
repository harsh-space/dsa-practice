#include <bits/stdc++.h>
using namespace std;
bool findmt(vector<vector<int>> &mat, int &k)
{
    int m = mat.size(), n = mat[0].size();
    int t = 0, b = m - 1;
    while (t <=b)
    {
        int mid = (t+b)/2;
        if (mat[mid][0] <= k && k <= mat[mid][n - 1])
        {
            for (auto it : mat[mid])
            {
                if (it == k)
                    return true;
            }
            return false;
        }
        else if (mat[mid][0] < k)
            t = mid + 1;

        else
            b = mid - 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> mat = {
        {1, 3, 5},
        {7, 8, 10},
        {12, 15, 18}};
    int k = 0;
    if (findmt(mat, k))
    {
        cout << "Element " << k << " found in the matrix." << endl;
    }
    else
    {
        cout << "Element " << k << " not found in the matrix." << endl;
    }

    return 0;
}