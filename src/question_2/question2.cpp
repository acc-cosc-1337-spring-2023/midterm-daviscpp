#include "question2.h"

int get_hours(int seconds_since_1970) 
{
    int hours = (seconds_since_1970 / 3600) % 24;
    return hours;
}

int get_minutes(int seconds_since_1970) 
{
    int minutes = (seconds_since_1970 / 60) % 60;
    return minutes;
}

int get_seconds(int seconds_since_1970) 
{
    int seconds = seconds_since_1970 % 60;
    return seconds;
}

void display_time()
{
    int seconds_since_1970 = 0;
    cout << "Enter value to display time: ";
    cin >> seconds_since_1970;

    int hours = get_hours(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970);
    int seconds = get_seconds(seconds_since_1970);

    cout << "Time: " << hours << ":" << minutes << ":" << seconds << "\n";
}