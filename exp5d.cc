// exp5 c 
// Switch case for displaying employee details (simple program)

#include <iostream>

int main() {
    int info; // Use an integer for numeric choices
    
    std::cout << "1. Employee name\n"
              << "2. Employee id\n"
              << "3. Department\n"
              << "4. Main Domain\n";
              
    std::cout << "Enter your choice (1-4): ";
    std::cin >> info;

    switch(info) {
        case 1: // Use integer literals instead of char literals
            std::cout << "Employee Name: Avishi\n";
            break;
        case 2:
            std::cout << "Employee ID: EMP1234\n";
            break;
        case 3:
            std::cout << "Department: Electronics\n";
            break;
        case 4:
            std::cout << "Main Domain: Embedded Systems\n";
            break;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 4.\n";
            break; // Good practice to have a break in the default case too
    }

    return 0;
}