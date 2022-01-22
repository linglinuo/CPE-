# CPE- 
10404 Primary Arithmetic
---------------------------
Children are taught to add multi-digit numbers from right-to-left one digit at a time. Many find the
“carry” operation - in which a 1 is carried from one digit position to be added to the next - to be a
significant challenge. Your job is to count the number of carry operations for each of a set of addition
problems so that educators may assess their difficulty.

### Input
Each line of input contains two unsigned integers less than 10 digits. The last line of input contains ‘0 0’.

### Output
For each line of input except the last you should compute and print the number of carry operations
that would result from adding the two numbers, in the format shown below.

### Sample Input
        123 456
        555 555
        123 594
        0 0
### Sample Output
        No carry operation.
        3 carry operations.
        1 carry operation.
10406 Vito's family
----------------------------------------------------------------------------------------------------

The world-known gangster Vito Deadstone is moving to New York. He has a very big family there, all
of them living in Lamafia Avenue. Since he will visit all his relatives very often, he is trying to find a house close to them. Vito wants to minimize the total distance to all of them and has blackmailed you to write a program that solves his problem.

### Input

The input consists of several test cases. The first line contains the number of test cases.
For each test case you will be given the integer number of relatives r (0 < r < 500) and the street
numbers (also integers) s1, s2, . . . , si , . . . , sr where they live (0 < si < 30000 ). Note that several relatives could live in the same street number.

### Output

For each test case your program must write the minimal sum of distances from the optimal Vito’s house
to each one of his relatives. The distance between two street numbers si and sj is dij = |si − sj|.

### Sample Input

    2
    2 2 4
    3 2 4 6
### Sample Output

    2
    4

10407 Hashmat the Brave Warrior
------------------------------------------------------------------------------------------------
Hashmat is a brave warrior who with his group of young soldiers moves from one place to another to
fight against his opponents. Before Fighting he just calculates one thing, the difference between his
soldier number and the opponent’s soldier number. From this difference he decides whether to fight or
not. Hashmat’s soldier number is never greater than his opponent.

### Input

The input contains two numbers in every line. These two numbers in each line denotes the number
soldiers in Hashmat’s army and his opponent’s army or vice versa. The input numbers are not greater
than 232. Input is terminated by ‘End of File’.

### Output

For each line of input, print the difference of number of soldiers between Hashmat’s army and his
opponent’s army. Each output should be in seperate line.

### Sample Input

    10 12
    10 14
    100 200
### Sample Output

    2
    4
    100
