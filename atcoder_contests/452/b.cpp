/*
    B - Draw Frame
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    There is a grid with H rows and W columns.
    Takahashi is going to paint each cell of this grid black or white.

    He paints all cells on the border of the grid black,
    and all other cells white.
    Output the grid after he has painted it.

    More formally:

    Constraints
    3 ≤ H ≤ 10
    3 ≤ W ≤ 10

    All input values are integers.

    Input
    The input is given from Standard Input in the following format:

        H W

    Output
    Output H lines, each a string of length W.

    The j-th character (1 ≤ j ≤ W) of the i-th line should be:
        '#' if cell (i, j) is painted black
        '.' if cell (i, j) is painted white

    Sample Input 1
    4 5

    Sample Output 1
    #####
    #...#
    #...#
    #####

    Explanation:
    For example, cell (1,1) is on the border.
    This is because there are only two cells edge-adjacent to cell (1,1):
        (1,2) and (2,1)

    Thus, cell (1,1) is painted black,
    so the first character of the first line should be '#'.

    Conversely, cell (3,4) is not on the border.
    This is because there are four cells edge-adjacent to cell (3,4):
        (2,4), (3,3), (3,5), and (4,4)

    Thus, cell (3,4) is painted white,
    so the fourth character of the third line should be '.'

    Sample Input 2
    5 6

    Sample Output 2
    ######
    #....#
    #....#
    #....#
    ######
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int h,w;
    cin>>h>>w;
    vector<vector<char>>grid(h,vector<char>(w));
    for(int j=0;j<w;j++){
        grid[0][j]='#';
    }
    for(int j=0;j<w;j++){
        grid[h-1][j]='#';
    }
    for(int i=0;i<h;i++){
        grid[i][0]='#';
    }
    for(int i=0;i<h;i++){
        grid[i][w-1]='#';
    }
    for(int i=0;i<h;i++){

        for(int j=0;j<w;j++){
            if(grid[i][j]!='#')grid[i][j]='.';
        }
    }
    for(int i=0;i<h;i++){

        for(int j=0;j<w;j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }

    
    return 0;
}
