#include "question3.h"

int get_earned_points(int sold)
{
    if (sold >= 1 && sold <= 5) 
    {
        return sold;
    } 
    else if (sold >= 6 && sold <= 10) 
    {
        return 5 * sold;
    } 
    else if (sold >= 11 && sold <= 15) 
    {
        return 10 * sold;
    } 
    else if (sold >= 16) 
    {
        return 15 * sold;
    } 
    else 
    {
        return 0;
    }
}

void run_menu()
{
    int sold;
    char choice;
    
    do {
        cout << "Enter number of widgets sold: ";
        if (!(cin >> sold)) 
        {
            continue;
        }
        
        int points = get_earned_points(sold);
        cout << "Points Earned: " << points << endl;
        
        cout << "Continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}