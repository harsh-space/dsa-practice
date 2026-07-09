/*
    B - Parking 2

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    There is a parking lot. The fee for parking in this lot is as follows:

    - During the period from exactly L o'clock to exactly R o'clock, a fee of X is charged for each hour parked.
    - During the period not covered above, a fee of Y is charged for each hour parked.

    If a car is parked in this lot from exactly A o'clock to exactly B o'clock without crossing midnight, determine the total parking fee.

    Constraints
    -----------
    - 1 ≤ X, Y ≤ 1000
    - 1 ≤ L < R ≤ 23
    - 1 ≤ A < B ≤ 23
    - All input values are integers.

    Input
    -----
    The input is given from Standard Input in the following format:

    X Y L R A B

    Output
    ------
    Output the answer.

    Sample Input 1
    --------------
    700 300 9 17 7 21

    Sample Output 1
    ---------------
    7400

    Sample Input 2
    --------------
    600 500 9 17 17 20

    Sample Output 2
    ---------------
    1500

    Sample Input 3
    --------------
    900 200 12 14 11 13

    Sample Output 3
    ---------------
    1100
*/

#include<bits/stdc++.h>
using namespace std;
int  main(){
    int X, Y, L, R, A, B;
    cin>>X>>Y>>L>>R>>A>>B;
    if(A>=L && B<=R)cout<<(B-A)*X;
    else if(A>=R || B<=L)cout<<(B-A)*Y;
    else{
        if(A<L && B>L&&B<R)cout<<(L-A)*Y+(B-L)*X;
        else if(A>L && A<R&& B>R)cout<<(R-A)*X+(B-R)*Y;
        else{
            cout<<(L-A)*Y+(R-L)*X+(B-R)*Y;
        }
    }
    return 0;
}