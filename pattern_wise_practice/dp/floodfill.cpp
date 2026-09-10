#include <bits/stdc++.h>
using namespace std;

void fill(int sr, int sc, int ncolor, int ocolor, vector<vector<int>>& image) {
    if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != ocolor || image[sr][sc] == ncolor) return;
    
    image[sr][sc] = ncolor;
    
    fill(sr + 1, sc, ncolor, ocolor, image);
    fill(sr, sc - 1, ncolor, ocolor, image);
    fill(sr - 1, sc, ncolor, ocolor, image);
    fill(sr, sc + 1, ncolor, ocolor, image);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    fill(sr, sc, color, image[sr][sc], image);
    return image;
}

int main() {
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };
    
    int startingRow = 1;
    int startingCol = 1;
    int newColor = 2;
    
    for (const auto& row : image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    
    vector<vector<int>> result = floodFill(image, startingRow, startingCol, newColor);
    
    cout << endl;
    for (const auto& row : result) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    
    return 0;
}
