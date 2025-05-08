/*
problem :  12.  11. Write a program, based on the sterling structure of Exercise 10 in Chapter 4, that
 obtains from the user two money amounts in old-style British format (£9:19:11), adds
 them, and displays the result, again in old-style format. Use three functions. The first
 should obtain a pounds-shillings-pence value from the user and return the value as a
 structure of type sterling. The second should take two arguments of type sterling and
 return a value of the same type, which is the sum of the arguments. The third should take
 a sterling structure as its argument and display its value
 
 soln by : copilot

*/
#include <iostream>

using namespace std;

// Define the sterling structure
struct sterling {
    int pounds, shillings, pence;
};

// Function to get a sterling value from the user
sterling getSterling() {
    sterling s;
    cout << "Enter amount (£pounds:shillings:pence): ";
    cin >> s.pounds >> s.shillings >> s.pence;
    return s;
}

// Function to add two sterling values
sterling addSterling(sterling s1, sterling s2) {
    sterling sum;
    sum.pence = s1.pence + s2.pence;
    sum.shillings = s1.shillings + s2.shillings + (sum.pence / 12);
    sum.pence %= 12;
    sum.pounds = s1.pounds + s2.pounds + (sum.shillings / 20);
    sum.shillings %= 20;
    return sum;
}

// Function to display a sterling value
void displaySterling(sterling s) {
    cout << "Total: £" << s.pounds << ":" << s.shillings << ":" << s.pence << endl;
}

int main() {
    sterling amount1 = getSterling();
    sterling amount2 = getSterling();
    sterling total = addSterling(amount1, amount2);
    displaySterling(total);
    return 0;
}
