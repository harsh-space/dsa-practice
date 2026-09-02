#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

vector<int> nodesBetweenCriticalPoints(ListNode *head)
{
    vector<int> ar;
    ListNode *temp = head;
    while (temp != NULL)
    {
        ar.push_back(temp->val);
        temp = temp->next;
    }

    vector<int> pts;
    vector<int> ans = {-1, -1};

    if (ar.size() < 3)
        return ans;

    for (int i = 1; i < ar.size() - 1; i++)
    {
        if ((ar[i] > ar[i + 1] && ar[i] > ar[i - 1]) || (ar[i] < ar[i + 1] && ar[i] < ar[i - 1]))
        {
            pts.push_back(i);
        }
    }

    if (pts.size() < 2)
        return ans;

    int min_dist = INT_MAX;
    for (int i = 1; i < pts.size(); i++)
    {
        min_dist = min(min_dist, pts[i] - pts[i - 1]);
    }
    ans[0] = min_dist;
    ans[1] = pts.back() - pts.front();
    return ans;
}

ListNode *createList( vector<int> &vals)
{
    if (vals.empty())
        return nullptr;
    ListNode *head = new ListNode(vals[0]);
    ListNode *curr = head;
    for (size_t i = 1; i < vals.size(); ++i)
    {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}
int main()
{
    vector<int> nodes = {5, 3, 1, 2, 5, 1, 2};
    ListNode *head = createList(nodes);
    vector<int> result =nodesBetweenCriticalPoints(head);

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    return 0;
}
