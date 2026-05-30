/*
    C - Sneaking Glances
    Time Limit: 2 sec / Memory Limit: 1024 MiB

    Score:
    300 points

    Problem Statement
    -----------------
    Takahashi is at coordinate 0.5 on a number line.

    He will make N moves.
    In the i-th move, he chooses either the positive direction
    or the negative direction, and moves Li in that direction.

    What is the maximum number of times he can pass through coordinate 0?

    Under the constraints of this problem,
    no move will end at coordinate 0.

    Constraints
    -----------
    1 ≤ N ≤ 20
    1 ≤ Li ≤ 10^9

    All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        L1 L2 ... LN

    Output
    ------
    Output the answer.

    Sample Input 1
    --------------
    5
    2 5 2 2 1

    Sample Output 1
    ---------------
    4

    Explanation:
    By choosing the directions of movement as follows,
    he can pass through coordinate 0 four times,
    which is the maximum.

    - First move:
      Choose the negative direction and move 2.
      Position: 0.5 -> -1.5
      Passes through 0.

    - Second move:
      Choose the positive direction and move 5.
      Position: -1.5 -> 3.5
      Passes through 0.

    - Third move:
      Choose the negative direction and move 2.
      Position: 3.5 -> 1.5

    - Fourth move:
      Choose the negative direction and move 2.
      Position: 1.5 -> -0.5
      Passes through 0.

    - Fifth move:
      Choose the positive direction and move 1.
      Position: -0.5 -> 0.5
      Passes through 0.

    Sample Input 2
    --------------
    5
    100 1 2 3 4

    Sample Output 2
    ---------------
    1

    Sample Input 3
    --------------
    20
    1 1 1 1 1 1 1 1 1 1
    1 1 1 1 1 1 1 1 1 1

    Sample Output 3
    ---------------
    20
*/

//Greedy is wrong approach

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<int>mov(l,0);
    for(int i=0;i<l;i++){
        cin>>mov[i];
    }
    float crnt=0.5;
    int cnt=0;
    for(int i=0;i<l;i++){
        if(crnt>0){
            //left
            int t=crnt-mov[i];
            if(t<0 && crnt>0){
                cnt++;
            }
            crnt=t;

        }
        else{
            //right
            int t=crnt+mov[i];
            if(t<0 && crnt>0){
                cnt++;  
            }
            crnt=t;

        }
        
    }
    cout<<cnt;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    vector<int>mov(l,0);
    for(int i=0;i<l;i++){
        cin>>mov[i];
    }
    float crnt=0.5;
    int cnt=0;
    return 0;
}