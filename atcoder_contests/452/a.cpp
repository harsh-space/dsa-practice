/*
    A - Gothec

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score : 100 points

    Problem Statement
    -----------------
    The following five days are called the five seasonal festivals (gosekku).

        January 7
        March 3
        May 5
        July 7
        September 9

    If month M, day D is one of the five seasonal festivals,
    output "Yes"; otherwise, output "No".

    Constraints
    -----------
    - M and D are integers.
    - Month M, day D is a valid date in a leap year
      in the Gregorian calendar.

    Input
    -----
    The input is given from Standard Input in the following format:

        M D

    Output
    ------
    If month M, day D is one of the five seasonal festivals,
    output "Yes"; otherwise, output "No".

    Sample Input 1
    --------------
        3 3

    Sample Output 1
    ---------------
        Yes

    March 3 is one of the five seasonal festivals,
    so output "Yes".

    Sample Input 2
    --------------
        1 1

    Sample Output 2
    ---------------
        No

    January 1 is not one of the five seasonal festivals,
    so output "No".

    Sample Input 3
    --------------
        4 4

    Sample Output 3
    ---------------
        No

    Sample Input 4
    --------------
        11 7

    Sample Output 4
    ---------------
        No
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, d;
    cin >> m >> d;
    if((m == 1 && d == 7) || (m == 3 && d == 3) || (m == 5 && d == 5) || (m == 7 && d == 7) || (m == 9 && d == 9)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}
