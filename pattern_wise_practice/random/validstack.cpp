#include <bits/stdc++.h>
using namespace std;
bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
{
    stack<int> stk;
    int j = 0;

    for (int x : pushed)
    {
        stk.push(x);

        while (!stk.empty() && stk.top() == popped[j])
        {
            stk.pop();
            j++;
        }
    }
    return stk.empty();
}

int main()
{
    vector<int>pushed={1,2,3,4,5};

    vector<int>popped={4,5,3,2,1};
    cout<<validateStackSequences(pushed,popped);
    
    return 0;
}