// Book seat(s) in a stadium and calculate the total cost

#include <iostream>
using namespace std;
int main()
{
    long id;
    int age, seats, price;
    char seatClass;

    cout << "Please, enter the ID number and your age: \n";
    cin >> id >> age;

    if (age >= 18)
    {
        cout << "Please enter A,B or C to choose the seat class \n";
        cin >> seatClass;

        switch (seatClass)
        {
        case 'A':
        case 'a':
            price = 100;
            break;
        case 'B':
        case 'b':
            price = 75;
            break;
        case 'C':
        case 'c':
            price = 50;
            break;
        default:
            cout << "Invalid class type!";
            return 0;
        }

        cout << "Please enter the number of seats you want to book: \n";
        cin >> seats;

        cout << "\nTotal cost = " << seats * price;
    }
    else
        cout << "Sorry...You are not allowed to book a seat";

    return 0;
}
