// Convert temperature between Celsius and Fahrenheit

#include <iostream>
using namespace std;
int main()
{
    double temp;
    char unit;
    cout << "Please enter the temperature and measurement system (c or f): ";
    cin >> temp >> unit;

    if (unit == 'c' || unit == 'C')
        cout << static_cast<int>(temp * 9 / 5 + 32) << " degrees Fahrenheit";
    else if (unit == 'f' || unit == 'F')
        cout << static_cast<int>((temp - 32) * 5 / 9) << " degrees Celsius";
    else
        cout << "Entered wrong input!";

    return 0;
}
