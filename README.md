# CPE- 
10400 The 3n + 1 problem
-------------------------------
Problems in Computer Science are often classified as belonging to a certain class of problems (e.g.,
NP, Unsolvable, Recursive). In this problem you will be analyzing a property of an algorithm whose
classification is not known for all possible inputs.

Consider the following algorithm:
1. input n
2. print n
3. if n = 1 then STOP
4. if n is odd then n ←− 3n + 1
5. else n ←− n/2
6. GOTO 2


Given the input 22, the following sequence of numbers will be printed


22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1


It is conjectured that the algorithm above will terminate (when a 1 is printed) for any integral input
value. Despite the simplicity of the algorithm, it is unknown whether this conjecture is true. It has
been verified, however, for all integers n such that 0 < n < 1, 000, 000 (and, in fact, for many more
numbers than this.)
Given an input n, it is possible to determine the number of numbers printed before and including
the 1 is printed. For a given n this is called the cycle-length of n. In the example above, the cycle
length of 22 is 16.
For any two numbers i and j you are to determine the maximum cycle length over all numbers
between and including both i and j.

### Input

The input will consist of a series of pairs of integers i and j, one pair of integers per line. All integers
will be less than 10,000 and greater than 0.
You should process all pairs of integers and for each pair determine the maximum cycle length over
all integers between and including i and j.
You can assume that no operation overflows a 32-bit integer.

### Output

For each pair of input integers i and j you should output i, j, and the maximum cycle length for
integers between and including i and j. These three numbers should be separated by at least one space
with all three numbers on one line and with one line of output for each line of input. The integers i
and j must appear in the output in the same order in which they appeared in the input and should be
followed by the maximum cycle length (on the same line).

### Sample Input

        1 10
        100 200
        201 210
        900 1000

### Sample Output

        1 10 20
        100 200 125
        201 210 89
        900 1000 174

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

10425 Decode the Mad man
----------------------------
Once in BUET, an old professor had gone completely mad. He started talking with some peculiar
words. Nobody could realize his speech and lectures. Finally the BUET authority fall in great trouble.
There was no way left to keep that man working in university. Suddenly a student (definitely he was
a registered author at UVA ACM Chapter and hold a good rank on 24 hour-Online Judge) created
a program that was able to decode that professor’s speech. After his invention, everyone got comfort
again and that old teacher started his everyday works as before.
So, if you ever visit BUET and see a teacher talking with a microphone, which is connected to a
IBM computer equipped with a voice recognition software and students are taking their lecture from
the computer screen, don’t get thundered! Because now your job is to write the same program which
can decode that mad teacher’s speech!

### Input

The input file will contain only one test case i.e. the encoded message.
The test case consists of one or more words.

### Output

For the given test case, print a line containing the decoded words. However, it is not so hard task to
replace each letter or punctuation symbol by the two immediately to its left alphabet on your standard
keyboard.

### Sample Input

        k[r dyt I[o

### Sample Output

        how are you


10460 You can say 11
------------------------------------
Your job is, given a positive number N, determine if it is a multiple of eleven.

### Input

The input is a file such that each line contains a positive number. A line containing the number ‘0’ is
the end of the input. The given numbers can contain up to 1000 digits.

### Output

The output of the program shall indicate, for each input number, if it is a multiple of eleven or not.

### Sample Input

        112233
        30800
        2937
        323455693
        5038297
        112234
        0

### Sample Output

        112233 is a multiple of 11.
        30800 is a multiple of 11.
        2937 is a multiple of 11.
        323455693 is a multiple of 11.
        5038297 is a multiple of 11.
        112234 is not a multiple of 11.

10473 Summing Digits
--------------------
For a positive integer n, let f(n) denote the
sum of the digits of n when represented in base
10. It is easy to see that the sequence of numbers n, f(n), f(f(n)), f(f(f(n))), . . . eventually
becomes a single digit number that repeats forever. Let this single digit be denoted g(n).
For example, consider n = 1234567892.
Then:


f(n) = 1+2+3+4+5+6+7+8+9+2 = 47


f(f(n)) = 4 + 7 = 11


f(f(f(n))) = 1 + 1 = 2


Therefore, g(1234567892) = 2.


### Input

Each line of input contains a single positive integer n at most 2,000,000,000. Input is terminated
by n = 0 which should not be processed.

### Output

For each such integer, you are to output a single
line containing g(n).

### Sample Input

        2
        11
        47
        1234567892
        0
        
### Sample Output

        2
        2
        2
        2
