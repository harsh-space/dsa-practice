#include <bits/stdc++.h>
using namespace std;
void reversearrr(vector<int> &arr)
{
    int i = 0, j = arr.size() - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            swap(arr[i], arr[j]);
        }
        i++;
        j--;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>num;
    while(n--){
        int ele;
        cin>>ele;
        num.push_back(ele);

    }
    reversearrr(num);
    for(auto it :num){
        cout<<it<<" ";
    }

    return 0;
}