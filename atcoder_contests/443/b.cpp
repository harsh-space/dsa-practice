/*
    B - Setsubun

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    200 points

    Problem Statement
    -----------------
    At the annual Setsubun festival, one eats the same number of beans as
    their age. Takahashi-kun does not eat beans at any other time.

    He is N years old at this year's Setsubun (0 years later).

    At the earliest, how many years later will he have eaten a total of
    K or more beans from this year onward (including this year)?

    He is immortal, so he will eventually have eaten a total of
    K or more beans from this year onward.

    Constraints
    -----------
    - All input values are integers.
    - 1 ≤ N, K ≤ 10^8

    Input
    -----
    The input is given from Standard Input in the following format:

        N
        K

    Output
    ------
    Print the answer.

    Sample Input 1
    --------------
        4 43

    Sample Output 1
    ---------------
        6

    Sample Input 2
    --------------
        100000000 100000000

    Sample Output 2
    ---------------
        0

    Sample Input 3
    --------------
        1234 12345678

    Sample Output 3
    ---------------
        3886
*/

#include <iostream>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long total_beans = 0;
    long long years_later = 0;

    while (total_beans < k) {
        total_beans += (n + years_later);
        
        if (total_beans >= k) {
            cout << years_later << "\n";
            return 0;
        }
        
        years_later++;
    }

    return 0;
}
