// Write a program for simple grade calculation using ternary operator, switch case, and if-else statement.

#include <iostream>
using namespace std;

int main() {
    int marks;
    char grade; // Change the type of grade to char

    cout << "Enter the marks of the student: ";
    cin >> marks;

    // Use ternary operator to assign grade
    grade = (marks > 90) ? 'A' : (marks > 80) ? 'B' : (marks > 70) ? 'C' : (marks > 60) ? 'D' : (marks > 50) ? 'E' : 'F';

    // Use switch case statement to print grade
    switch (grade) {
        case 'A':
            cout << "Your grade is A. Excellent work!";
            break;
        case 'B':
            cout << "Your grade is B. Well done";
            break;
        case 'C':
            cout << "Your grade is C. Good job";
            break;
        case 'D':
            cout << "Your grade is D. You Passed, but you could do better";
            break;
        case 'E':
            cout << "Your grade is E. Just Passed";
            break;
        case 'F':
            cout << "Your grade is F. Sorry, you Failed";
            break;
    }

    // Use if-else statement to check eligibility
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'E') {
        cout << "\nYou are eligible for the next level";
    } else {
        cout << "\nYou are not eligible for the next level";
    }

    return 0;
}