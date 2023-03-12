#include "question1.h"

vector<double> get_cookie_ingredients(int cookies)
{
    double expected_sugar = (cookies * 1.5) / 48.0;
    double expected_butter = (cookies * 1.0) / 48.0;
    double expected_flour = (cookies * 2.75) / 48.0;

    vector<double> result = {expected_sugar, expected_butter, expected_flour};
    return result;
}

void run_menu()
{
    int option{1};
    while(option != 0)
    {
        cout << "Enter the number of cookies you want to bake (enter 0 to quit): ";
        if (!(cin >> option))
        {
            cout << "Please enter an integer value!";
            continue;
        }

        else if(option == 0)
            break;

        vector<double> ingredients = get_cookie_ingredients(option);
        cout << "Cups of sugar: " << ingredients[0] << "\n";
        cout << "Cups of butter: " << ingredients[1] << "\n";
        cout << "Cups of flour: " << ingredients[2] << "\n";
    }
}