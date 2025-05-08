/*
problem :  10. Write a function that, when you call it, displays a message telling how many times it has
 been called: “I have been called 3 times”, for instance. Write a main() program that calls
 this function at least 10 times. Try implementing this function in two different ways.
 First, use a global variable to store the count. Second, use a local static variable. Which
 is more appropriate? Why can’t you use a local variable?

 soln by : copilot

*/

#include <iostream>

using namespace std;

// Approach 1: Using a global variable
int globalCount = 0;

void globalCounter() {
    globalCount++;
    cout << "I have been called " << globalCount << " times (global variable)." << endl;
}

// Approach 2: Using a local static variable
void staticCounter() {
    static int staticCount = 0;
    staticCount++;
    cout << "I have been called " << staticCount << " times (static variable)." << endl;
}

int main() {
    cout << "Calling the functions 10 times each:\n";

    for (int i = 0; i < 10; i++) {
        globalCounter();
    }

    cout << endl;

    for (int i = 0; i < 10; i++) {
        staticCounter();
    }

    return 0;
}
