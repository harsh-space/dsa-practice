#include <bits/stdc++.h>

using namespace std;

bool canFormArray(vector<int> &arr, vector<vector<int>> &pieces) {
    int i = 0;
    while (i < arr.size()) {
        bool foundPiece = false;
        for (const auto &piece : pieces) {
            if (piece[0] == arr[i]) {
                foundPiece = true;
                for (int val : piece) {
                    if (i >= arr.size() || arr[i] != val) {
                        return false;
                    }
                    i++;
                }
                break;
            }
        }
        if (!foundPiece) {
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr = {91, 4, 64, 78};
    vector<vector<int>> pieces = {{78}, {4, 64}, {91}};
    
    if (canFormArray(arr, pieces)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}