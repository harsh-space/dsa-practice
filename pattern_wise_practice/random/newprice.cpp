#include <bits/stdc++.h>
using namespace std;
double minPrice(vector<int> &prices, vector<int> &discounts)
{
    sort(discounts.begin(), discounts.end(), greater<int>());
    sort(prices.begin(), prices.end(), greater<int>());
    double s = accumulate(prices.begin(), prices.end(), 0.0);
    int n = min(prices.size(), discounts.size());
    double td = 0.0;
    for (int i = 0; i < n; i++)
    {
        td += (prices[i] * (discounts[i] / 100.0));
    }
    return s - td;
}
int main() { 
    vector<int>p={10,30,21};
    vector<int>d={50,60};
    cout<<minPrice(p,d);    
    return 0;
}