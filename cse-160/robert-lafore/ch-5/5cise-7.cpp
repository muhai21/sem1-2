/*
problem :  7. Start with the power() function of Exercise 2, which works only with type double.
 Create a series of overloaded functions with the same name that, in addition to double,
 also work with types char, int, long, and float. Write a main() program that exercises
 these overloaded functions with all argument types.
 
soln by : copilot
*/

#include <iostream>

using namespace std;

// Overloaded power functions for different data types
double power(double n, int p = 2) {
    double result = 1;
    for (int i = 1; i <= p; i++)
        result *= n;
    return result;
}

char power(char n, int p = 2) {
    char result = 1;
    for (int i = 1; i <= p; i++)
        result *= n;
    return result;
}

int power(int n, int p = 2) {
    int result = 1;
    for (int i = 1; i <= p; i++)
        result *= n;
    return result;
}

long power(long n, int p = 2) {
    long result = 1;
    for (int i = 1; i <= p; i++)
        result *= n;
    return result;
}

float power(float n, int p = 2) {
    float result = 1.0;
    for (int i = 1; i <= p; i++)
        result *= n;
    return result;
}

int main() {
    double num1;
    char num2;
    int num3;
    long num4;
    float num5;

    cout << "Enter a double value: ";
    cin >> num1;
    cout << "Power of " << num1 << " is: " << power(num1) << endl;

    cout << "\nEnter a char value: ";
    cin >> num2;
    cout << "Power of " << num2 << " is: " << power(num2) << endl;

    cout << "\nEnter an int value: ";
    cin >> num3;
    cout << "Power of " << num3 << " is: " << power(num3) << endl;

    cout << "\nEnter a long value: ";
    cin >> num4;
    cout << "Power of " << num4 << " is: " << power(num4) << endl;

    cout << "\nEnter a float value: ";
    cin >> num5;
    cout << "Power of " << num5 << " is: " << power(num5) << endl;

    return 0;
}
