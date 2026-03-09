#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int i = 0, j = height.size() - 1;
    int ar = INT_MIN;
    
    while (i < j) {
        ar = max(min(height[i], height[j]) * (j - i), ar);
        if (height[i] < height[j]) 
            i++;
        else 
            j--;
    }
    return ar;
}

int main() {
   
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    
    int result = maxArea(heights);
    
    cout << "The maximum area is: " << result << endl; // Expected: 49
    
    return 0;
}