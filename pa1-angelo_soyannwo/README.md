# PA1
Programming Assignment 1 Repository


# Q1: Intersecting Rectangles [20 points]
Write a program that reads in two rectangles from the console (STDIN). The rectangles are indicated by their (x, y) lower left coordinate and their length (x) and height (y). You do NOT need to deal with negative numbers and can assume all inputs are integers. The program should then tell if the rectangles intersect or not. You are able to use the <math.h> library in this assignment. For more see: http://www.cplusplus.com/reference/cmath/


# Q2. Converting Units [10 points]
Write a program that converts numbers among Celsius, Fahrenheit, and Kelvin. Note that your program should be capable of doing the conversion from any of these to the other. The program should start by asking the user to select the conversion type. If an incorrect code is entered (e.g. 6 or -1) an error message should be shown and the user should be prompted again.


# Q3. Hamming Distance [25 points]
In information theory, the Hamming distance between two sequences of equal length is the number of positions at which the corresponding symbols are different. Put another way, it measures the minimum number of substitutions required to change one string into the other, or the number of errors that transform one string into the other.

Examples:
The Hamming distance between:
- "toned" and "roses" is 3.
-	1011101 and 1001001 is 2.
-	2173896 and 2233796 is 3.  
(Description above is from Wikipedia: http://en.wikipedia.org/wiki/Hamming_distance )

Write a program that prompts the user to enter two numbers between 0-100 (decimal) and computes the Hamming distance between the two numbers when the numbers are represented in base-3 (ternary format). The program then displays the Hamming distance on the screen. Hint: You don’t need to convert the numbers to 1’s, 2’s, and 0’s to figure this out. Think about how to figure this out with arithmetic. Start out thinking how you would do this with base-10.



# Q4. Blackjack [25 points]

In this question, you will create a PARTIAL Blackjack simulator. Notice that this version of Blackjack does not allow you to split cards, double down, Aces are always 11, etc. There is also no dealer. It just randomly draws two cards to start. It then determines if you “bust” (i.e. go over 21) or not. Then you can decide to keep drawing a single card until you want to stop or you bust.

Provide an overloaded function with the following specifications:
- The function's name is blackJack. You should be able to call blackJack with two integers (2-10), with one integer (2-10) AND a letter (A, K, Q or J) in any order, with two letters (the letters have to be among A, K, Q or J), with one integer (2-10), and finally with one letter (A, K, Q or J).

- The letters correspond to the following numerical values: A: 11, K: 10, Q: 10, and J:10.


- The function has an int return type and it should check the summation of the inputs + the running total. Notice that the running total will be global variable since you do not pass it to the function. If the new running total is less than 21, it should return the value of the running total and prompt the user for another draw, either 'y' or 'n'. If the sum is greater than 21, it should return -1 and a "FAILED BLACKJACK" message should print to the terminal and the game should quit.   If the sum is 21, the function returns 21 and a message of "WON BLACKJACK" should print to the terminal and program execution should halt. 

- Your overloaded function should give error messages if called with values outside (2-10) or (A, K, Q, J); e.g., calling the function with (11,K), (2,P), or (A,B) should result in an error message. 
*You can assume the function is always called with letters/integers; no need to handle strings, doubles, or other input data types.

-	You need to use C/C++ random number generator to create the values for the initial double draw and subsequent single draws. See: http://www.cplusplus.com/reference/cstdlib/rand/ 

- The program should continue execution until the game has been won, lost, quit, or an error occurred. After these four cases, the program should print a corresponding message and not prompt the user for another draw, and exit execution.


# Q5. Cryptography [20 points]
There are many ways to encrypt messages. One way is to write every word with the next lexigraphical letter such as; “Hello World” would be encrypted as “IFMMP XPSME”.   Write code that takes a letter (in lowercase or uppercase) as input and prints this encryption of it; which is the next letter (in a cyclic way i.e. for ‘Z’ it should print ‘A’). The output should be in uppercase.  If the input is not a letter (e.g., user entered a number instead of a letter), your code should print an error message.

Hint: You might find ASCII table useful to print the next letter or convert to uppercase. In the ASCII table (see Appendix B of your book), uppercase letters appear before lowercase letters. The offset between any uppercase letter and its corresponding lowercase letter is the same. You can compute this offset by:
int offset = ‘a’ – ‘A’;   or by    int offset = ‘A’ – ‘a’; 
