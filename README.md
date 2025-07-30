# 💻 C++ Fundamentals: A Guide to Control Flow ⚙️

Welcome! This repository breaks down some of the most important building blocks in programming: **control flow statements**. Think of these as the brain of your program, allowing it to make smart decisions and take different actions based on the situation.

We'll explore how to guide your program's logic using:
* `if-else` statements
* `if-else if-else` ladders
* `switch-case` statements

***

## 🚀 Dive Into the Program Logic 🚀

Let's unpack what each program does and how it achieves its goal.

***

### 🔢 **1. Even or Odd Checker**

* **🎯 Purpose**: To figure out if a number is even or odd.

* **🧠 Core Logic**: The program uses a neat math trick! It checks the remainder when the user's number is divided by 2.
    * If the remainder is `0` (using `number % 2 == 0`), the number is **Even**.
    * If there's any other remainder, the number is **Odd**.

* **💡 Example Execution**:
    > ```
    > Enter a number
    > 42
    > 42 is Even.
    > ```

***
### 🔤 **2. Vowel or Consonant Checker**

* **🎯 Purpose**: To determine if a given letter is a vowel or a consonant.

* **🧠 Core Logic**: The program checks if the input character matches any of the 10 vowel possibilities (`a, e, i, o, u` in both lowercase and uppercase). It uses a long `if` statement connected by `||` (OR) operators. If the character is any one of these, it's a vowel. If not, the program assumes it's a consonant.

* **💡 Example Execution**:
    > ```
    > Enter a character: E
    > Entered character is a vowel
    > ```

***

### 🏆 **3. Largest of Three Numbers**

* **🎯 Purpose**: To find the champion among three numbers—the largest one!

* **🧠 Core Logic**: This program uses an `if-else if-else` ladder to efficiently find the winner.
    1.  First, it checks if number `a` is bigger than both `b` and `c`.
    2.  If not, it moves on to check if `b` is the biggest.
    3.  If neither `a` nor `b` is the largest, then by elimination, `c` must be the winner!

* **💡 Example Execution**:
    > ```
    > Enter first number: 9
    > Enter second number: 21
    > Enter third number: 15
    > 21 is the largest number
    > ```

***
### 📋 **4. Employee Details Menu**

* **🎯 Purpose**: To act like a small information kiosk, displaying employee data based on a user's menu choice.

* **🧠 Core Logic**: This program showcases the `switch-case` statement, a super clean way to handle multiple choices. The program takes a number from the user and "switches" to the matching `case` to display the correct information. The `default` case is a safety net that catches any invalid choices.

* **💡 Example Execution**:
    > ```
    > 1. Employee name
    > 2. Employee id
    > 3. Department
    > 4. Main Domain
    > Enter your choice (1-4): 3
    > Department: Electronics
    > ```

***


