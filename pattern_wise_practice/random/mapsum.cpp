#include <bits/stdc++.h>
using namespace std;

class MapSum
{
public:
    unordered_map<string, int> mp;
    MapSum()
    {
    }

    void insert(string key, int val)
    {
        mp[key] = val;
    }

    int sum(string prefix)
    {
        int ans = 0;
        for (auto it : mp)
        {
            string k = it.first;
            if (k.find(prefix) == 0)
                ans += it.second;
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */

int main()
{
    MapSum *obj = new MapSum();
    obj->insert("apple", 3);
    cout << obj->sum("ap") << endl;
    obj->insert("app", 2);
    cout << obj->sum("ap") << endl;
    return 0;
}