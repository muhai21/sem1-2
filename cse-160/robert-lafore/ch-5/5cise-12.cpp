/*
problem :  12. Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
 functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
 fmul(), and fdiv(). Each of these functions should take two arguments of type struct
 fraction, and return an argument of the same type.

 soln by : copilot

*/

#include <iostream>

using namespace std;

// Define the fraction structure
struct fraction {
    int num, den;
};

// Function to add fractions
fraction fadd(fraction f1, fraction f2) {
    fraction result;
    result.num = f1.num * f2.den + f1.den * f2.num;
    result.den = f1.den * f2.den;
    return result;
}

// Function to subtract fractions
fraction fsub(fraction f1, fraction f2) {
    fraction result;
    result.num = f1.num * f2.den - f1.den * f2.num;
    result.den = f1.den * f2.den;
    return result;
}

// Function to multiply fractions
fraction fmul(fraction f1, fraction f2) {
    fraction result;
    result.num = f1.num * f2.num;
    result.den = f1.den * f2.den;
    return result;
}

// Function to divide fractions
fraction fdiv(fraction f1, fraction f2) {
    fraction result;
    result.num = f1.num * f2.den;
    result.den = f1.den * f2.num;
    return result;
}

int main() {
    fraction f1, f2, result;
    char op, temp;

    cout << "Enter first fraction (num/den): ";
    cin >> f1.num >> temp >> f1.den;
    cout << "Enter operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter second fraction (num/den): ";
    cin >> f2.num >> temp >> f2.den;

    switch (op) {
        case '+': result = fadd(f1, f2); break;
        case '-': result = fsub(f1, f2); break;
        case '*': result = fmul(f1, f2); break;
        case '/': result = fdiv(f1, f2); break;
        default: cout << "Invalid operation!" << endl; return 1;
    }

    cout << "Result: " << result.num << "/" << result.den << endl;
    return 0;
}
