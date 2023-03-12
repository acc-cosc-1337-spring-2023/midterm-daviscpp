#include "question4.h"

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        auto temp = num1;
        if (num1 < num2)
        {
            num1 = num2;
            num2 = temp;
        }
        else if (num1 > num2)
            num1 -= num2;
    }

    return num1;
}

void run_menu()
{
    char choice;
    bool exitMenu = false;
    auto option1 = 0, option2 = 0;

    do {
        cout << "MENU" << endl;
        cout << "1-GCD" << endl;
        cout << "2-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case '1':
            cout << "Enter two numbers between 1-200: ";
            cin >> option1 >> option2;
            if (option1 < 1 || option1 > 200 || option2 < 1 || option2 > 200) 
            {
            cout << "Numbers must be between 1 and 200." << endl;
            continue;
            }
            cout << gcd(option1, option2) << endl;
            break;
        case '2':
            cout << "Are you sure you want to exit? (y/n): ";
            char confirmExit;
            cin >> confirmExit;
            if (confirmExit == 'y' || confirmExit == 'Y')
            {
                exitMenu = true;
            }
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
            break;
        }
    } while (!exitMenu);

    cout << "Exiting program..." << endl;
}