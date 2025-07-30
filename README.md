C++ Fundamentals: Control Flow Structures
This repository offers a curated collection of beginner-friendly C++ programs designed to provide a clear and detailed understanding of fundamental control flow statements. Control flow is the cornerstone of programming logic, allowing a program to make decisions and execute different blocks of code based on specific conditions.

This collection focuses on:

if-else statement: For binary decision-making.

if-else if-else ladder: For handling multiple, mutually exclusive conditions.

switch-case statement: For efficiently handling a multi-way branch based on a single variable's value.

In-Depth Program Analysis
Below is a detailed breakdown of each program, explaining its purpose, the logic behind the code, and an example of its execution.

1. Even or Odd Checker
Purpose: To determine if an integer provided by the user is even or odd.

Core Logic: The logic hinges on the mathematical definition of an even number: it is an integer that is perfectly divisible by 2, meaning the division results in a remainder of 0. The program evaluates the condition number % 2 == 0 using the modulo operator (%). If the remainder is 0, the condition is true and the number is even; otherwise, the number is odd.

Example Execution:

Enter a number
42
42 is Even.
2. Vowel or Consonant Checker
Purpose: To identify if a user-input character is a vowel or a consonant.

Core Logic: A character is a vowel if it is 'a', 'e', 'i', 'o', or 'u'. The check must be case-insensitive, so it also recognizes 'A', 'E', 'I', 'O', and 'U'. The program uses a long if statement with logical OR (||) operators to see if the input character matches any of the 10 possible vowel characters. If a match is found, it's a vowel; otherwise, it's considered a consonant.

Example Execution:

Enter a character: E
Entered character is a vowel
3. Largest of Three Numbers
Purpose: To find and display the largest number among three integers given by the user.

Core Logic: The program uses an if-else if-else ladder to systematically compare the numbers. It first checks if the first number (a) is greater than the other two. If not, it proceeds to an else if block to check if the second number (b) is the largest. If neither of the first two conditions is met, a final else block concludes that the third number (c) must be the largest.

Example Execution:

Enter first number: 9
Enter second number: 21
Enter third number: 15
21 is the largest number
4. Employee Details Menu (Switch-Case)
Purpose: To display specific employee information from a menu based on a numeric choice from the user.

Core Logic: This program uses a switch-case statement to handle menu selections. The switch statement evaluates the user's integer input. The program then jumps to the case label that matches the input value and executes the code within it. A break statement is used after each case to prevent the code from "falling through" to the next one. A default case is included to handle any invalid inputs that don't match a case.

Example Execution:

1. Employee name
2. Employee id
3. Department
4. Main Domain
Enter your choice (1-4): 3
Department: Electronics
