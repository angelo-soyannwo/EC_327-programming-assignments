# PA2
Programming Assignment 2

Total: 100 points

- You may use any development environment you wish, as long as it is ANSI C++ compatible. Please make sure your code compiles and runs properly under the Linux/Unix environment on the PHO 305/307 (or eng-grid) machines before submitting. 
- Labs may be submitted up to a week late at the cost of a 30% fixed penalty (e.g., submitting a day late and a week late is equivalent).  It is in your best interest to complete as many lab questions as possible before the deadline. If you have missing questions in your original submission, you may complete and submit the missing solutions during the following week. Any submissions after the deadline will be subject to the 30% penalty. No credit will be given to solutions submitted after the 1-week late submission period following the deadline.
- Follow the assignment submission guidelines in this document or you will lose points.

Submission Format (Please Read)
-	Use the exact file names specified in each problem for your solutions.
-	For revisions and late assignments please append “Late” to the name of the file.
-	Please do NOT submit *.exe and *.o or any other files that are not required by the problem.
-	Comment your code (good practice, and required for partial credit!)
-	GitHub assignment link - https://classroom.github.com/a/M6Pw7v0q 


# Q1. Functions, Header Files, File I/O (40 pts) 

READ THE WHOLE QUESTION BEFORE YOU START. IT IS LONG AND HAS MANY PARTS.
You need to write a C++ program that will interactively accept commands from the user. Each command is a single character followed by one, two, or three parameters and specifies a function that needs to be performed. See the assignment on Blackboard for more details.

Submission requirements: You should submit three files: Q1.cpp, pa2Functions.cpp and pa2Functions.h. 

# Q2. Recursion (30 pts)

a). (15 pts)

Write a function gcd(m,n) that recursively computes the greatest common divisor of two positive integers m and n and returns the result as an integer. If either (or both) of the inputs is less than or equal to 0, the function should return zero to indicate invalid input. See the assignment on Blackboard for more details.

b). (15 pts)

Write a recursive function to compute the series shown in the document on Blackboard.

Submission requirements: You should submit two files: Q2a.cpp and Q2b.cpp

# Q3.  Array of pointers and dynamic memory allocation (30 points)

Write a function called ReverseMultiply that doubles the size of an integer array and fills the second half with a copy of the first half in reverse order and adds a final additional location for the product of all the numbers.

Write a function called ReverseAdd that creates an array with the original values and then adds new entries that are the sum of sets of numbers in the array starting from the original “end” moving forward.

Your main function (in Q3.cpp along with the ReverseMultiply and ReverseAdd function) should request the size of the original array and then allow the user to input the values. It should then print out the original array and address along with the new arrays and addresses. More information in the assignment on Blackboard.

Submission requirements: You should submit one file: Q3.cpp


