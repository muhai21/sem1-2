/*
problem :  6. Start with the program from Exercise 11 in Chapter 4, “Structures,” which adds two
 struct time values. Keep the same functionality, but modify the program so that it uses
 two functions. The first, time_to_secs(), takes as its only argument a structure of type
Functions
 time, and returns the equivalent in seconds (type long). The second function,
 secs_to_time(), takes as its only argument a time in seconds (type long), and returns a
 structure of type time.

 
 soln by : copilot

*/

#include <iostream>

using namespace std;

// Define the time structure
struct Time {
    int hours, minutes, seconds;
};

// Function to convert a Time structure to total seconds
long time_to_secs(Time t) {
    return (t.hours * 3600) + (t.minutes * 60) + t.seconds;
}

// Function to convert total seconds back to a Time structure
Time secs_to_time(long totalSeconds) {
    Time t;
    t.hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    t.minutes = totalSeconds / 60;
    t.seconds = totalSeconds % 60;
    return t;
}

int main() {
    Time time1, time2;
    long totalSeconds;

    // Get user input for first time value
    cout << "Enter time (hh mm ss): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    // Convert to seconds and display
    totalSeconds = time_to_secs(time1);
    cout << "Total seconds: " << totalSeconds << endl;

    // Get user input for seconds and convert back to time
    cout << "Enter total seconds: ";
    cin >> totalSeconds;
    time2 = secs_to_time(totalSeconds);

    // Display converted time
    cout << "Converted time: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    return 0;
}
