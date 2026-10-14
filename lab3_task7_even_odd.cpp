// Check whether a number is even or odd using switch statement

#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    switch (num % 2)
    {
    case 0:
        cout << num << " is even";
        break;
    default:
        cout << num << " is odd";
    }

    return 0;
}
