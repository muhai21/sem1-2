/*
problem :  5. Write a function called hms_to_secs() that takes three int values—for hours, minutes,
 and seconds—as arguments, and returns the equivalent time in seconds (type long).
 Create a program that exercises this function by repeatedly obtaining a time value in
 hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
 displaying the value of seconds it returns.

soln : copilot

*/
#include <iostream>

using namespace std;

// Function to convert hours, minutes, and seconds to total seconds
long hms_to_secs(int hours, int minutes, int seconds) {
    return (hours * 3600) + (minutes * 60) + seconds;
}

int main() {
    int hours, minutes, seconds;

    // Loop to repeatedly obtain input from the user
    while (true) {
        cout << "Enter time (hh mm ss) or -1 to exit: ";
        cin >> hours;

        // Exit condition
        if (hours == -1) {
            break;
        }

        cin >> minutes >> seconds;

        // Call function and display the result
        long totalSeconds = hms_to_secs(hours, minutes, seconds);
        cout << "Total seconds: " << totalSeconds << endl;
    }

    return 0;
}
