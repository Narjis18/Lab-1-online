// Calculate the number of calories the body needs

#include <iostream>
using namespace std;
int main()
{
    int age;
    double weight, length, calories;
    char gender;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter weight: ";
    cin >> weight;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter gender (m or f): ";
    cin >> gender;

    if (gender == 'm' || gender == 'M')
    {
        calories = 6.25 * length + 10 * weight - age * 5 + 5;
        cout << "Calories = " << calories;
    }
    else if (gender == 'f' || gender == 'F')
    {
        calories = 6.25 * length + 10 * weight - age * 5 - 161;
        cout << "Calories = " << calories;
    }
    else
        cout << "Entered wrong input!";

    return 0;
}
