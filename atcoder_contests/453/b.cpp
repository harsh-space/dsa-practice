/*

    B - Sensor Data Logging

    Time Limit: 2 sec
    Memory Limit: 1024 MiB

    Score :
    200 points

    Problem Statement
    -----------------
    In a certain measurement, the sensor readings at times
    0,1,…,T are recorded according to the following rules.

    • At time 0, the reading is saved.
    • At times 1,2,…,T, the reading is saved if and only if
      the absolute difference between the current reading and
      the most recently saved reading is at least X.

    The sensor reading at time i = 0,1,…,T was Ai.

    Output the times at which readings were saved and the
    saved values, in ascending order of time.


    Constraints
    -----------
    1 ≤ T ≤ 100
    1 ≤ X ≤ 100
    0 ≤ Ai ≤ 100

    All input values are integers.


    Input
    -----
    The input is given from Standard Input in the following format:

        T X
        A0 A1 … AT


    Output
    ------
    If k readings were saved, and the i-th saved reading
    in ascending order of time was at time ti with value ai,
    output in the following format:

        t1 a1
        t2 a2
        ⋮
        tk ak


    Sample Input 1
    --------------
    6 10
    30 35 40 21 30 12 31


    Sample Output 1
    ---------------
    0 30
    2 40
    3 21
    6 31

*/