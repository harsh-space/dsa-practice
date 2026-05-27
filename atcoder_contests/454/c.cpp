/*
    C - Straw Millionaire
    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Problem Statement:
    There are N types of items:
        item 1, item 2, ..., item N.

    Initially, Takahashi has only item 1.

    There are M friends.
    If Takahashi gives item Ai to the i-th friend,
    he receives item Bi in return.

    Determine how many different types of items
    Takahashi can obtain, including item 1.

    --------------------------------------------------

    Constraints:
    - 2 <= N <= 3 × 10^5
    - 1 <= M <= 3 × 10^5
    - 1 <= Ai, Bi <= N
    - Ai != Bi

    All input values are integers.

    --------------------------------------------------

    Input Format:
    N M
    A1 B1
    A2 B2
    ...
    AM BM

    --------------------------------------------------

    Output:
    Print the number of obtainable item types.

    --------------------------------------------------

    Sample Input 1:
    5 5
    1 2
    2 3
    3 4
    2 4
    5 2

    Sample Output 1:
    4

    Explanation:
    Initially:
        item 1

    Possible sequence:
        Give item 1 -> receive item 2
        Give item 2 -> receive item 4

    Obtainable items:
        1, 2, 3, 4

    Total = 4

    --------------------------------------------------

    Sample Input 2:
    3 2
    2 1
    3 2

    Sample Output 2:
    1

    Explanation:
    Starting from item 1,
    no new item can be obtained.

    --------------------------------------------------

    Sample Input 3:
    7 8
    2 6
    2 5
    3 6
    1 6
    1 2
    5 6
    2 3
    3 7

    Sample Output 3:
    6
*/