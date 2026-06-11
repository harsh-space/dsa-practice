/*
    Problem: A - π
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score:
    100 points

    --------------------------------------------------

    Problem Statement

    You are given a positive integer D.

    Find the area of a circle with diameter D.

    --------------------------------------------------

    Constraints

    1 ≤ D ≤ 100

    The input value is an integer.

    --------------------------------------------------

    Input

    The input is given from Standard Input in the following format:

        D

    --------------------------------------------------

    Output

    Output the answer.

    Your answer is considered correct if the absolute or
    relative error from the true answer is at most 10^-6.

    --------------------------------------------------

    Sample Input 1

        2

    Sample Output 1

        3.141592653589793

    Explanation:
    The area of a circle with diameter 2 is
    3.141592653589793....

    --------------------------------------------------

    Sample Input 2

        7

    Sample Output 2

        38.48451000647496

    --------------------------------------------------

    Sample Input 3

        98

    Sample Output 3

        7542.9639612690935
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int d;
  cin>>d;
  double r=d/2.0;
  double p=numbers::pi;
  // cout<<p*r*r;
  cout<<fixed<<setprecision(16)<<p*r*r;
  return 0;
}