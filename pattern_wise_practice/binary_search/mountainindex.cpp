#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;

    while (left < right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

int main(){
    vector<int>a={0,2,1,0};
    cout<<peakIndexInMountainArray(a);
}