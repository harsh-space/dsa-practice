/*
    B - Spiral Galaxy
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    You are given a grid with H rows and W columns.

    The cell at row i and column j is represented as:
        (i, j)

    Each cell is either:
        '.' -> white
        '#' -> black

    The grid is described using H strings:
        S1, S2, ..., SH

    --------------------------------------------------

    Task:
    Count the number of rectangular subgrids that are
    point-symmetrically colored.

    A rectangle is defined by:
        (h1, h2, w1, w2)

    satisfying:
        1 <= h1 <= h2 <= H
        1 <= w1 <= w2 <= W

    The rectangle is point-symmetric if for every cell
    (i, j) inside the rectangle:

        cell(i, j)

    and

        cell(h1 + h2 - i, w1 + w2 - j)

    have the same color.

    --------------------------------------------------

    Constraints:
    - 1 <= H, W <= 10
    - Each Si is a string of length W
    - Each character is '.' or '#'

    --------------------------------------------------

    Input Format:
    H W
    S1
    S2
    ...
    SH

    --------------------------------------------------

    Output:
    Print the number of point-symmetric rectangular regions.

    --------------------------------------------------

    Sample Input 1:
    3 2
    .#
    #.
    ##

    Sample Output 1:
    10

    Explanation:
    There are 10 rectangular regions satisfying
    the point-symmetry condition.

    --------------------------------------------------

    Sample Input 2:
    4 5
    .#.#.
    ####.
    ##..#
    ....#

    Sample Output 2:
    54
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<string> S(h);
    for(int i = 0; i < h; i++){
        cin >> S[i];
    }
    
    int cnt = 0;
    for(int h1 = 0; h1 < h; h1++){
        for(int w1 = 0; w1 < w; w1++){
            for(int h2 = h1; h2 < h; h2++){
                for(int w2 = w1; w2 < w; w2++){
                    bool issym = true;
                    for(int i = h1; i <= h2; i++){ 
                        for(int j = w1; j <= w2; j++){
                            int opi = h1 + h2 - i;
                            int opj = w1 + w2 - j;
                            if(S[i][j] != S[opi][opj]){
                                issym = false;
                                break;
                            }
                        }
                        if(!issym) break;
                    }
                    if(issym) cnt++;
                }
            }
        }
    }
    cout << cnt << "\n"; 

    return 0;
}