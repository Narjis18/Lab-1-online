// Simple calculator using switch statement

#include <iostream>
using namespace std;
int main()
{
    double a, b;
    char op;

    cout << "enter a value : \n";
    cin >> a;
    cout << "enter b value : \n";
    cin >> b;
    cout << "enter operation (+ , - , * , / ): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "The result = " << a + b;
        break;
    case '-':
        cout << "The result = " << a - b;
        break;
    case '*':
        cout << "The result = " << a * b;
        break;
    case '/':
        if (b == 0)
            cout << "Can not divide by zero!";
        else
            cout << "The result = " << a / b;
        break;
    default:
        cout << "entered wrong input";
    }

    return 0;
}
