#include<bits/stdc++.h>
using namespace std;

bool helper(int s, vector<int> &ar, vector<bool> &vis)
{
    if (s < 0 || s >= ar.size())
        return false;
    if (ar[s] == 0)
        return true;
    if (vis[s])
        return false;
    vis[s] = true;
    return helper(s + ar[s], ar, vis) || helper(s - ar[s], ar, vis);
}

bool canReach(vector<int> &arr, int start)
{
    vector<bool> vis(arr.size(), false);
    return helper(start, arr, vis);
}
int main(){
    vector<int>ar={1,2,3,0,6,7,0};
    int i=4;
    cout<<canReach(ar,i);
    return 0;
}