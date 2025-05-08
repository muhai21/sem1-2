/*
problem :   9. Repeat Exercise 8, but instead of two int variables, have the swap() function inter
change two struct time values (see Exercise 6).

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
