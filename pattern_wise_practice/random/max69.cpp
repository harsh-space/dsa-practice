#include <bits/stdc++.h>
using namespace std;

int maximum69Number(int num)
{
    vector<int> ar;
    while (num > 0)
    {
        ar.push_back(num % 10);
        num /= 10;
    }
    reverse(ar.begin(), ar.end());
    int i = 0;
    for (i = 0; i < ar.size(); i++)
    {
        if (ar[i] == 6)
        {
            ar[i] = 9;
            break;
        }
    }
    int nn = 0;
    // reverse(ar.begin(),ar.end());
    for (int i : ar)
    {
        nn *= 10;
        nn += i;
    }
    return nn;
}
int main()
{
    int n=966969;
    cout<<maximum69Number(n);
    return 0;
}