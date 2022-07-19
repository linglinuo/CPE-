# CPE- 2022
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
        

10401 Fibonaccimal Base
-------------------------------
The well known Fibonacci sequence is obtained by starting with 0 and 1 and then adding the two last
numbers to get the next one. For example the third number in the sequence is 1 (1=1+0), the forth is
2 (2=1+1), the fifth is 3 (3=2+1) and so on.   
![image](https://user-images.githubusercontent.com/98205711/178676554-d8f758fc-a2fe-4e6f-98b1-f4d552d1d588.png)   
   
The sequence appears on many things in our life, in nature, and has a great significance. Among
other things, do you know that all positive integer numbers can be represented as a sum of numbers in
the Fibonacci sequence? More than that, all positive integers can be represented as a sum of a set of
Fibonacci numbers, that is, numbers from the sequence, without repetition. For example: 13 can be the
sum of the sets {13}, {5,8} or {2,3,8} and 17 is represented by {1,3,13} or {1,3,5,8}. Since all numbers
have this property (do you want to try to prove this for yourself?) this set could be a nice way to use as
a "base" to represent the number. But, as we have seen, some numbers have more than one set whose
sum is the number. How can we solve that? Simple! If we add the constraint that the sets cannot
have two consecutive Fibonacci numbers, than we have a unique representation for each number! This
restriction is because the sum of any two consecutive Fibonacci numbers is just the following Fibonacci
number.   
Now that we know all this we can prepare a nice way to represent any positive integer. We will use
a binary sequence (just zeros and ones) to do that. For example, 17 = 1 + 3 + 13 (remember that no
two consecutive Fibonacci numbers can be used). Let’s write a zero for each Fibonacci number that is
not used and one for each one that is used, starting at the right. Then, 17 = 100101. See figure 2 for a
detailed explanation. In this representation we should not have zeros at the left, this is, we should only
write starting with the first one. In order for you to understand better, note that in this scheme, not
using two consecutive Fibonacci numbers means that the binary sequence will not have two consecutive
ones. When we use this representation for a number we say that we are using the Fibonaccimal base,
and we write it like 17 = 100101 (fib).   
![image](https://user-images.githubusercontent.com/98205711/178677025-3fd6b0f9-3245-4cfe-86a3-a75d47672bba.png)   
Given a set of numbers in decimal base, your task is to write them in the Fibonaccimal base.

### Input

The first line of input contains a single number N, representing the quantity of numbers that follow
(1 ≤ N ≤ 500).   
Than follow exactly N lines, each one containing a single positive integer smaller than 100 000 000.
These numbers can come in any order.

### Output

You should output a single line for each of the N integers in the input, with the format ‘DEC BASE
= F IB BASE (fib)’. DEC BASE is the original number in decimal base and F IB BASE is its
representation in Fibonaccimal base. See the sample output for an example.

### Sample Input

        10
        1
        2
        3
        4
        5
        6
        7
        8
        9
        10

### Sample Output

        1 = 1 (fib)
        2 = 10 (fib)
        3 = 100 (fib)
        4 = 101 (fib)
        5 = 1000 (fib)
        6 = 1001 (fib)
        7 = 1010 (fib)
        8 = 10000 (fib)
        9 = 10001 (fib)
        10 = 10010 (fib)


10402 What's Cryptanalysis
-------------------------------
Cryptanalysis is the process of breaking someone else’s cryptographic writing. This sometimes involves
some kind of statistical analysis of a passage of (encrypted) text. Your task is to write a program which
performs a simple analysis of a given text.

### Input

The first line of input contains a single positive decimal integer n. This is the number of lines which
follow in the input. The next n lines will contain zero or more characters (possibly including whitespace).
This is the text which must be analyzed.

### Output

Each line of output contains a single uppercase letter, followed by a single space, then followed by a
positive decimal integer. The integer indicates how many times the corresponding letter appears in
the input text. Upper and lower case letters in the input are to be considered the same. No other
characters must be counted. The output must be sorted in descending count order; that is, the most
frequent letter is on the first output line, and the last line of output indicates the least frequent letter.
If two letters have the same frequency, then the letter which comes first in the alphabet must appear
first in the output. If a letter does not appear in the text, then that letter must not appear in the
output.

### Sample Input

        3
        This is a test.
        Count me 1 2 3 4 5.
        Wow!!!! Is this question easy?

### Sample Output

        S 7
        T 6
        I 5
        E 4
        O 3
        A 2
        H 2
        N 2
        U 2
        W 2
        C 1
        M 1
        Q 1
        Y 1

10403 Funny Encryption Method
-------------------------------
A student from ITESM Campus Monterrey plays with a new encryption method for numbers. These
method consist of the following steps:   
Steps : Example   
1. Read the number N to encrypt : M = 265   
2. Interpret N as a decimal number : $X_1$ = 265 (decimal)   
3. Convert the decimal interpretation of N to its binary representation : $X_1$ = 100001001 (binary)   
4. Let $b_1$ be equal to the number of 1’s in this binary representation : $b_1$ = 3   
5. Interpret N as a Hexadecimal number : $X_2$ = 265 (hexadecimal)   
6. Convert the hexadecimal interpretation of N to its binary representation : $X_2$ = 1001100101   
7. Let $b_2$ be equal to the number of 1’s in the last binary representation : $b_2$ = 5   
8. The encryption is the result of M xor $(b_1 ∗ b_2)$ : 265 xor (3*5) = 262   
   
This student failed Computational Organization, thats why this student asked the judges of ITESM
Campus Monterrey internal ACM programming Contest to ask for the numbers of 1’s bits of this two
representations so that he can continue playing.   
You have to write a program that read a Number and give as output the number $b_1$ and $b_2$   

### Input

The first line will contain a number N which is the number of cases that you have to process. Each
of the following N Lines (0 < N ≤ 1000) will contain the number M (0 < M ≤ 9999, in decimal
representation) which is the number the student wants to encrypt.

### Output

You will have to output N lines, each containing the number b1 and b2 in that order, separated by one
space corresponding to that lines number to crypt

### Sample Input

        3
        265
        111
        1234

### Sample Output

        3 5
        6 3
        5 5

10404 Primary Arithmetic
---------------------------
Children are taught to add multi-digit numbers from right-to-
one digit at a time. Many find the
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
        
10405 Jolly Jumpers
---------------------------
A sequence of n > 0 integers is called a jolly jumper if the absolute values of the difference between
successive elements take on all the values 1 through n − 1. For instance,   
1 4 2 3   
is a jolly jumper, because the absolutes differences are 3, 2, and 1 respectively. The definition implies
that any sequence of a single integer is a jolly jumper. You are to write a program to determine whether
or not each of a number of sequences is a jolly jumper.

### Input
Each line of input contains an integer n ≤ 3000 followed by n integers representing the sequence.

### Output
For each line of input, generate a line of output saying ‘Jolly’ or ‘Not jolly’

### Sample Input
        4 1 4 2 3
        5 1 4 2 -1 6
### Sample Output
        Jolly
        Not jolly
        
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

10408 What is the probability!!!
------------------------------------------------------------------------------------------------
Probability has always been an integrated part of computer algorithms. Where the deterministic
algorithms have failed to solve a problem in short time, probabilistic algorithms have come to the
rescue. In this problem we are not dealing with any probabilistic algorithm. We will just try to
determine the winning probability of a certain player.   
A game is played by throwing a dice like thing (it should not be assumed that it has six sides like
an ordinary dice). If a certain event occurs when a player throws the dice (such as getting a 3, getting
green side on top or whatever) he is declared the winner. There can be N such player. So the first
player will throw the dice, then the second and at last the N-th player and again the first player and
so on. When a player gets the desired event he or she is declared winner and playing stops. You will
have to determine the winning probability of one (The I-th) of these players.

### Input

Input will contain an integer S (S ≤ 1000) at first, which indicates how many sets of inputs are there.
The next S lines will contain S sets of inputs. Each line contain an integer N (N ≤ 1000) which denotes
the number players, a floating point number p which indicates the probability of the happening of a
successful event in a single throw (If success means getting 3 then p is the probability of getting 3 in
a single throw. For a normal dice the probability of getting 3 is 1/6), and I (I ≤ N) the serial of the
player whose winning probability is to be determined (Serial no varies from 1 to N). You can assume
that no invalid probability (p) value will be given as input.

### Output

For each set of input, output in a single line the probability of the I-th player to win. The output
floating point number will always have four digits after the decimal point as shown in the sample
output.

### Sample Input

    2
    2 0.166666 1
    2 0.166666 2
    
### Sample Output

    0.5455
    0.4545

10411 Back to high school physics
------------------------------------------------------------------------------------------------
A particle has initial velocity and acceleration. If its velocity after certain time is v then what will its
displacement be in twice of that time?

### Input

The input will contain two integers in each line. Each line makes one set of input. These two integers
denote the value of v (−100 ≤ v ≤ 100) and t (0 ≤ t ≤ 200) (t means at the time the particle gains
that velocity)

### Output

For each line of input print a single integer in one line denoting the displacement in double of that time

### Sample Input

    0 0
    5 12
    
### Sample Output

    0
    120

10414 Bangla Numbers
------------------------------------------------------------------------------------------------
Bangla numbers normally use ’kuti’ (10000000), ’lakh’ (100000), ’hajar’ (1000), ’shata’ (100) while
expanding and converting to text. You are going to write a program to convert a given number to text
with them.

### Input

The input file may contain several test cases. Each case will contain a non-negative number ≤
999999999999999.

### Output

For each case of input, you have to output a line starting with the case number with four digits
adjustment followed by the converted text.

### Sample Input

    23764
    45897458973958
    
### Sample Output

    1. 23 hajar 7 shata 64
    2. 45 lakh 89 hajar 7 shata 45 kuti 89 lakh 73 hajar 9 shata 58

10417 The hotel with infinite rooms
------------------------------------------------------------------------------------------------
The city of HaluaRuti has a strange hotel with infinite rooms. The groups that come to this hotel
follow the following rules:   
a) At the same time only members of one group can rent the hotel.   
b) Each group comes in the morning of the check-in day and leaves the hotel in the evening of the
check-out day.   
c) Another group comes in the very next morning after the previous group has left the hotel.   
d) A very important property of the incoming group is that it has one more member than its previous
group unless it is the starting group. You will be given the no of members of the starting group.   
e) A group with n members stays for n days in the hotel. For example, if a group of four members
comes on 1st August in the morning, it will leave the hotel on 4th August in the evening and the
next group of five members will come on 5th August in the morning and stay for five days and
so on.   
Given the initial group size you will have to find the group size staying in the hotel on a specified
day.   

### Input

The input contains round numbers S (1 ≤ S ≤ 10000) and D (1 ≤ D < $10^{15}$) in every line. S denotes
the initial size of the group and D denotes that you will have to find the group size staying in the hotel
on D-th day (starting from 1). All the input and output integers will be less than $10^{15}$. A group size S
means that on the first day a group of S members come to the hotel and stays for S days then comes
a group of S + 1 members according to the previously described rules and so on.

### Output

For each line of input, print on a single line the size of the group staying in the hotel on the D-th day.

### Sample Input

    1 6
    3 10
    3 14
    
### Sample Output

    3
    5
    6

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

10431 498'
----------------------------
Looking throw the “Online Judge’s Problem Set Archive” I found a very interesting problem number
498, titled “Polly the Polynomial”. Frankly speaking, I did not solve it, but I derived from it this
problem.   
Everything in this problem is a derivative of something from 498. In particular, 498 was “... designed
to help you remember ... basic algebra skills, make the world a better place, etc., etc.”. This problem
is designed to help you remember basic derivation algebra skills, increase the speed in which world
becomes a better place, etc., etc.   
In 498 you had to evaluate the values of polynomial   
   
$a_0x^n + a_1x^{n−1} + . . . + a_{n−1}x + a_n$   
   
In this problem you should evaluate its derivative. Remember that derivative is defined as   
   
$a_0nx^{n−1} + a_1(n − 1)x^{n−2} + . . . + a_{n−1}$   
   
All the input and output data will fit into integer, i.e. its absolute value will be less than $2^31$.

### Input

Your program should accept an even number of lines of text. Each pair of lines will represent one
problem. The first line will contain one integer - a value for x. The second line will contain a list of
integers $a_0, a_1, ..., a_{n−1}, a_n $, which represent a set of polynomial coefficients.
Input is terminated by ¡EOF¿.

### Output

For each pair of lines, your program should evaluate the derivative of polynomial for the given value x
and output it in a single line.

### Sample Input

        7
        1 -1
        2
        1 1 1

### Sample Output

        1
        5

10419 Divide, But Not Quite Conquer!
------------------------------------
Your goal in this problem is to divide a certain integer n by another integer m until n = 1, obtaining
a sequence of numbers. Lets call a[i] each number of this sequence, and let’s say it has k numbers (i.e.
you must do k − 1 succesive divisions to reach n = 1). You can only have this sequence if the following
restrictions are met:   
• a[1] = n, a[i] = a[i − 1] ÷ m, for all 1 < i ≤ k   
• a[i] is divisible by m (that is, a[i] mod m = 0) for all 1 ≤ i < k   
• a[1] > a[2] > a[3] > . . . > a[k]   
For instance, if n = 125 and m = 5, you have 125, 25, 5 and 1 (you did 3 divisions: 125/5, 25/5
and 5/5). So, k = 4, a[1] = 125, a[2] = 25, a[3] = 5 and a[4] = 1.   
If n = 30 and m = 3, you have 30, 10, 3 and 1. But a[2] = 10, and 10 mod 3 = 1, so there is no
sequence because it violates restriction 2. When the sequence doesn’t exist we think it’s not fun and,
thus, very boring!

### Input

The input will consist on an arbitrary number of lines. Each line will consist of two non-negative
integers n, m which are both less than 2000000000. You must read until you reach the end of file.

### Output

For each pair n, m you must print the correspondent sequence a (as defined above) in a single line, with
each adjacent numbers of the sequence separated by a single space. In the case the sequence doesn’t
exist because it violates some restriction, just print the phrase ‘Boring!’ in a single line (without the
quotes).

### Sample Input

        125 5
        30 3
        80 2
        81 3

### Sample Output

        125 25 5 1
        Boring!
        Boring!
        81 27 9 3 1

10428 Simply Emirp
------------------------------------
An integer greater than 1 is called a prime number if its only positive divisors (factors) are 1 and itself.
Prime numbers have been studied over the years by a lot of mathematicians. Applications of prime
numbers arise in Cryptography and Coding Theory among others.
Have you tried reversing a prime? For most primes, you get a composite (43 becomes 34). An
Emirp (Prime spelt backwards) is a Prime that gives you a different Prime when its digits are reversed.
For example, 17 is Emirp because 17 as well as 71 are Prime.
In this problem, you have to decide whether a number N is Non-prime or Prime or Emirp. Assume
that 1 < N < 1000000.
Interestingly, Emirps are not new to NTU students. We have been boarding 199 and 179 buses for
quite a long time!

### Input

Input consists of several lines specifying values for N.

### Output

For each N given in the input, output should contain one of the following:   
1. ‘N is not prime.’, if N is not a Prime number.   
2. ‘N is prime.’, if N is Prime and N is not Emirp.   
3. ‘N is emirp.’, if N is Emirp.   

### Sample Input

        17
        18
        19
        179
        199

### Sample Output

        17 is emirp.
        18 is not prime.
        19 is prime.
        179 is emirp.
        199 is emirp.

10453 Odd Sum
------------------------------------
Given a range [a, b], you are to find the summation of all the odd integers in this range. For example,
the summation of all the odd integers in the range [3, 9] is 3 + 5 + 7 + 9 = 24

### Input

There can be at multiple test cases. The first line of input gives you the number of test cases, T
(1 ≤ T ≤ 100). Then T test cases follow. Each test case consists of 2 integers a and b (0 ≤ a ≤ b ≤ 100)
in two separate lines.

### Output

For each test case you are to print one line of output – the serial number of the test case followed by
the summation of the odd integers in the range [a, b].

### Sample Input

        2
        1
        5
        3
        5

### Sample Output

        Case 1: 9
        Case 2: 8
        
10454 Beat the Spread
------------------------------------
Superbowl Sunday is nearly here. In order to pass the time waiting
for the half-time commercials and wardrobe malfunctions, the local
hackers have organized a betting pool on the game. Members place
their bets on the sum of the two final scores, or on the absolute
difference between the two scores.   
Given the winning numbers for each type of bet, can you deduce
the final scores?   

### Input

The first line of input contains n, the number of test cases. n lines
follow, each representing a test case. Each test case gives s and d,
non-negative integers representing the sum and (absolute) difference between the two final scores.

### Output

For each test case, output a line giving the two final scores, largest first. If there are no such scores,
output a line containing “impossible”. Recall that football scores are always non-negative integers.

### Sample Input

        2
        40 20
        20 40

### Sample Output

        30 10
        impossible

10458 2 the 9s
------------------------------------
A well-known trick to know if an integer N is a multiple of nine is to compute the sum S of its digits.   
If S is a multiple of nine, then so is N. This is a recursive test, and the depth of the recursion needed
to obtain the answer on N is called the 9-degree of N.   
Your job is, given a positive number N, determine if it is a multiple of nine and, if it is, its 9-degree.

### Input

The input is a file such that each line contains a positive number. A line containing the number 0 is
the end of the input. The given numbers can contain up to 1000 digits.

### Output

The output of the program shall indicate, for each input number, if it is a multiple of nine, and in case
it is, the value of its nine-degree. See the sample output for an example of the expected formatting of
the output.

### Sample Input

        999999999999999999999
        9
        9999999999999999999999999999998
        0

### Sample Output

        999999999999999999999 is a multiple of 9 and has 9-degree 3.
        9 is a multiple of 9 and has 9-degree 1.
        9999999999999999999999999999998 is not a multiple of 9.

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

10461 Parity
------------------------------------
We define the parity of an integer n as the sum of the bits in binary representation computed modulo
two. As an example, the number 21 = $10101_2$ has three 1s in its binary representation so it has parity
3(mod2), or 1.   
In this problem you have to calculate the parity of an integer 1 ≤ I ≤ 2147483647

### Input

Each line of the input has an integer I and the end of the input is indicated by a line where I = 0 that
should not be processed

### Output

For each integer I in the inputt you should print a line ‘The parity of B is P (mod 2).’, where B
is the binary representation of I.

### Sample Input

        1
        2
        10
        21
        0

### Sample Output

        The parity of 1 is 1 (mod 2).
        The parity of 10 is 1 (mod 2).
        The parity of 1010 is 2 (mod 2).
        The parity of 10101 is 3 (mod 2).

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

10478 Symmetric Matrix
--------------------
You‘re given a square matrix M. Elements of this matrix are Mij : {0 < i < n, 0 < j < n}. In this
problem you’ll have to find out whether the given matrix is symmetric or not.
Definition: Symmetric matrix is such a matrix that all elements of it are non-negative and symmetric
with relation to the center of this matrix. Any other matrix is considered to be non-symmetric. For
example:   
&emsp;&emsp;&ensp; 5 1 3   
M = [ 2 0 2 ]   is symmetric   
&emsp;&emsp;&ensp; 3 1 5   
      
&emsp;&emsp;&ensp; 5 1 3   
M = [ 2 0 2 ]   is not symmetric, because $3 \neq 0$  
&emsp;&emsp;&ensp; 0 1 5   
All you have to do is to find whether the matrix is symmetric or not. Elements of a matrix given
in the input are$ −2^{32} ≤ M_{ij} ≤ 2^{32} and 0 < n ≤ 100$


### Input

First line of input contains number of test cases T ≤ 300. Then T test cases follow each described in
the following way. The first line of each test case contains n – the dimension of square matrix. Then
n lines follow each of then containing row i. Row contains exactly n elements separated by a space
character. j-th number in row i is the element Mij of matrix you have to process.

### Output

For each test case output one line ‘Test #t: S’. Where t is the test number starting from 1. Line S
is equal to ‘Symmetric’ if matrix is symmetric and ‘Non-symmetric’ in any other case.


### Sample Input

        2
        N = 3
        5 1 3
        2 0 2
        3 1 5
        N = 3
        5 1 3
        2 0 2
        0 1 5
        
### Sample Output

        Test #1: Symmetric.
        Test #2: Non-symmetric.

10480 Square Numbers
--------------------
A square number is an integer number whose square root is also an integer. For example 1, 4, 81 are
some square numbers. Given two numbers a and b you will have to find out how many square numbers
are there between a and b (inclusive).


### Input

The input file contains at most 201 lines of inputs. Each line contains two integers a and b (0 < a ≤
b ≤ 100000). Input is terminated by a line containing two zeroes. This line should not be processed.

### Output

For each line of input produce one line of output. This line contains an integer which denotes how
many square numbers are there between a and b (inclusive).


### Sample Input

        1 4
        1 10
        0 0
        
### Sample Output

        2
        3

10517 Hartals
--------------------
A social research organization has determined a simple set of parameters to simulate the behavior of
the political parties of our country. One of the parameters is a positive integer h (called the hartal
parameter) that denotes the average number of days between two successive hartals (strikes) called by
the corresponding party. Though the parameter is far too simple to be flawless, it can still be used to
forecast the damages caused by hartals. The following example will give you a clear idea:
Consider three political parties. Assume $h_1$ = 3, $h_2$ = 4 and $h_3$ = 8 where $h_i$
is the hartal parameter
for party i (i = 1, 2, 3). Now, we will simulate the behavior of these three parties for N = 14 days.
One must always start the simulation on a Sunday and assume that there will be no hartals on weekly
holidays (on Fridays and Saturdays).
   
![image](https://user-images.githubusercontent.com/98205711/179663212-8dda9c38-933c-435b-8c87-9db167c04374.png)
   
The simulation above shows that there will be exactly 5 hartals (on days 3, 4, 8, 9 and 12) in 14
days. There will be no hartal on day 6 since it is a Friday. Hence we lose 5 working days in 2 weeks.
In this problem, given the hartal parameters for several political parties and the value of N, your
job is to determine the number of working days we lose in those N days.

### Input

The first line of the input consists of a single integer T giving the number of test cases to follow.   
The first line of each test case contains an integer N (7 ≤ N ≤ 3650) giving the number of days over
which the simulation must be run. The next line contains another integer P (1 ≤ P ≤ 100) representing
the number of political parties in this case. The ith of the next P lines contains a positive integer $h_i$
(which will never be a multiple of 7) giving the hartal parameter for party i (1 ≤ i ≤ P).

### Output

For each test case in the input output the number of working days we lose. Each output must be on a
separate line.


### Sample Input

        2
        14
        3
        3
        4
        8
        100
        4
        12
        15
        25
        40
        
### Sample Output

        5
        15

10567 Common Permutation
------------------------------

Given two strings of lowercase letters, a and b, print the longest string x of lowercase letters such
that there is a permutation of x that is a subsequence of a and there is a permutation of x that is a
subsequence of b.

### Input

Input file contains several lines of input. Consecutive two lines make a set of input. That means in the
input file line 1 and 2 is a set of input, line 3 and 4 is a set of input and so on. The first line of a pair
contains a and the second contains b. Each string is on a separate line and consists of at most 1000
lowercase letters.

### Output

For each set of input, output a line containing x. If several x satisfy the criteria above, choose the first
one in alphabetical order.

### Sample Input

        pretty
        women
        walking
        down
        the
        street

### Sample Output

        e
        nw
        et

11069 Sort! Sort!! and Sort!!!
------------------------------

Hmm! Here you are asked to do a simple sorting. You will be given N numbers and a positive integer
M. You will have to sort the N numbers in ascending order of their modulo M value. If there is a tie
between an odd number and an even number (that is their modulo M value is the same) then the odd
number will precede the even number. If there is a tie between two odd numbers (that is their modulo
M value is the same) then the larger odd number will precede the smaller odd number and if there
is a tie between two even numbers (that is their modulo M value is the same) then the smaller even
number will precede the larger even number.
For remainder value of negative numbers follow the rule of C programming language: A negative
number can never have modulus greater than zero. E.g. -100 MOD 3 = -1, -100 MOD 4 = 0, etc.

### Input

The input file contains 20 sets of inputs. Each set starts with two integers N (0 < N ≤ 10000) and
M (0 < M ≤ 10000) which denotes how many numbers are within this set. Each of the next N lines
contains one number each. These numbers should all fit in 32-bit signed integer. Input is terminated
by a line containing two zeroes.

### Output

For each set of input produce N + 1 lines of outputs. The first line of each set contains the value of N
and M. The next N lines contain N numbers, sorted according to the rules mentioned above. Print
the last two zeroes of the input file in the output file also.

### Sample Input

        15 3
        1
        2
        3
        4
        5
        6
        7
        8
        9
        10
        11
        12
        13
        14
        15
        0 0

### Sample Output

        15 3
        15
        9
        3
        6
        12
        13
        7
        1
        4
        10
        11
        5
        2
        8
        14
        0 0

22131 TEX Quotes
------------------------------

TEX is a typesetting language developed by Donald Knuth. It takes source text together with a few
typesetting instructions and produces, one hopes, a beautiful document. Beautiful documents use “
and ” to delimit quotations, rather than the mundane " which is what is provided by most keyboards.
Keyboards typically do not have an oriented double-quote, but they do have a left-single-quote \` and
a right-single-quote '. Check your keyboard now to locate the left-single-quote key \` (sometimes
called the “backquote key”) and the right-single-quote key ' (sometimes called the “apostrophe” or just
“quote”). Be careful not to confuse the left-single-quote \` with the “backslash” key \. TEX lets the user
type two left-single-quotes \`\` to create a left-double-quote “ and two right-single-quotes '' to create
a right-double-quote ”. Most typists, however, are accustomed to delimiting their quotations with the
un-oriented double-quote ".   
If the source contained   
   
"To be or not to be," quoth the bard, "that is the question."   
   
then the typeset document produced by TEX would not contain the desired form:   
   
“To be or not to be,” quoth the bard, “that is the question.”   
   
In order to produce the desired form, the source file must contain the sequence:    
   
\`\`To be or not to be,'' quoth the bard, \`\`that is the question.''   
   
You are to write a program which converts text containing double-quote (") characters into text
that is identical except that double-quotes have been replaced by the two-character sequences required
by TEX for delimiting quotations with oriented double-quotes. The double-quote (") characters should
be replaced appropriately by either \`\` if the " opens a quotation and by '' if the " closes a quotation.
Notice that the question of nested quotations does not arise: The first " must be replaced by \`\`, the
next by '', the next by \`\`, the next by '', the next by \`\`, the next by '', and so on.

### Input

Input will consist of several lines of text containing an even number of double-quote (") characters.
Input is ended with an end-of-file character

### Output

The text must be output exactly as it was input except that:   
* the first " in each pair is replaced by two ` characters: `` and   
* the second " in each pair is replaced by two ' characters: ''.
### Sample Input

        "To be or not to be," quoth the Bard, "that
        is the question".
        The programming contestant replied: "I must disagree.
        To `C' or not to `C', that is The Question!"

### Sample Output

        ``To be or not to be,'' quoth the Bard, ``that
        is the question''.
        The programming contestant replied: ``I must disagree.
        To `C' or not to `C', that is The Question!''
        
22801 Doom's Day Algorithm
------------------------------

No. Doom’s day algorithm is not a method to compute which day the world will end. It is an
algorithm created by the mathematician John Horton Conway, to calculate which day of the week
(Monday, Tuesday, etc.) corresponds to a certain date.   
This algorithm is based in the idea of the doomsday, a certain day of the week which always
occurs in the same dates. For example, 4/4 (the 4th of April), 6/6 (the 6th of June), 8/8 (the 8th of
August), 10/10 (the 10th of October) and 12/12 (the 12th of December) are dates which always occur
in doomsday. All years have their own doomsday.   
In year 2011, doomsday is Monday. So all of 4/4, 6/6, 8/8, 10/10 and 12/12 are Mondays. Using
that information, you can easily compute any other date. For example, the 13th of December 2011 will
be Tuesday, the 14th of December 2011 will be Wednesday, etc.   
Other days which occur on doomsday are 5/9, 9/5, 7/11 and 11/7. Also, in leap years, we have
the following doomsdays: 1/11 (the 11th of January) and 2/22 (the 22nd of Febrary), and in non-leap
years 1/10 and 2/21.   
Given a date of year 2011, you have to compute which day of the week it occurs.

### Input

The input can contain different test cases. The first line of the input indicates the number of test cases.   
For each test case, there is a line with two numbers: M D. M represents the month (from 1 to 12)
and D represents the day (from 1 to 31). The date will always be valid.


### Output

For each test case, you have to output the day of the week where that date occurs in 2011. The days
of the week will be: Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday.

### Sample Input

        8
        1 6
        2 28
        4 5
        5 26
        8 1
        11 1
        12 25
        12 31
        
### Sample Output

        Thursday
        Monday
        Tuesday
        Thursday
        Monday
        Tuesday
        Sunday
        Saturday
        
23621 B2-Sequence
------------------------------

A B2-Sequence is a sequence of positive integers $1 ≤ b_1 < b_2 < b_3 . . .$ such that all pairwise sums $b_i +b_j$ ,
where i ≤ j, are different.
Your task is to determine if a given sequence is a B2-Sequence or not.

### Input

Each test case starts with 2 ≤ N ≤ 100, the number of elements in a sequence. Next line will have N
integers, representing the value of each element in the sequence. Each element bi
is an integer such that
$b_i ≤ 10000$. There is a blank line after each test case. The input is terminated by end of file (EOF).


### Output

For each test case you must print the number of the test case, starting from 1, and a message indicating
if the corresponding sequence it is a B2-Sequence or not. See the sample output below. After each test
case you must print a blank line.

### Sample Input

        4
        1 2 4 8
        
        4
        3 7 10 14
        
### Sample Output

        Case #1: It is a B2-Sequence.
        
        Case #2: It is not a B2-Sequence.


