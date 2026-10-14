// Display the n terms of odd natural numbers and their sum

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "The odd numbers are: ";
    for (int i = 1; i <= n; i++)
    {
        int odd = 2 * i - 1;
        cout << odd << " ";
        sum = sum + odd;
    }

    cout << endl << "The Sum of odd Natural Numbers up to " << n << " terms: " << sum;

    return 0;
}
