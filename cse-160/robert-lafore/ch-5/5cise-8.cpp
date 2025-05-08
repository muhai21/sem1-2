/*
problem :  8. Write a function called swap() that interchanges two int values passed to it by the call
ing program. (Note that this function swaps the values of the variables in the calling pro
gram, not those in the function.) You’ll need to decide how to pass the arguments. Create
 a main() program to exercise the function.
 
 soln by : copilot
 
 */

 #include <iostream>

using namespace std;

// Define the time structure
struct Time {
    int hours, minutes, seconds;
};

// Function to swap two Time structures using pass-by-reference
void swap(Time &t1, Time &t2) {
    Time temp = t1;
    t1 = t2;
    t2 = temp;
}

int main() {
    Time time1, time2;

    // Get user input for first time value
    cout << "Enter first time (hh mm ss): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;

    // Get user input for second time value
    cout << "Enter second time (hh mm ss): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;

    // Display before swapping
    cout << "\nBefore swapping:\n";
    cout << "Time 1: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
    cout << "Time 2: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    // Call swap function
    swap(time1, time2);

    // Display after swapping
    cout << "\nAfter swapping:\n";
    cout << "Time 1: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << endl;
    cout << "Time 2: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << endl;

    return 0;
}
