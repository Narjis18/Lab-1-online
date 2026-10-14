// Bill issuer with discount and delivery charge

#include <iostream>
using namespace std;
int main()
{
    double price, total;
    int items;

    cout << "Enter item price: ";
    cin >> price;
    cout << "Enter No items: ";
    cin >> items;

    total = price * items;

    if (price >= 100 && items > 2)
    {
        // 5% discount and no delivery cost
        total = total * 0.95;

        // additional discount only if the total after discount is greater than 1000
        if (total > 1000)
            total = total * 0.95;
    }
    else
    {
        // no discount, add delivery charge
        total = total + 10;
    }

    cout << "Total cost = " << total;

    return 0;
}
