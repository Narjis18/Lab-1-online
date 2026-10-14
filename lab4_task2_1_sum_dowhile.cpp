// Read positive numbers and find their summation (do..while), stop when 0 is entered

#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Enter an integer value, to EXIT enter 0" << endl;

    do
    {
        cin >> num;
        sum = sum + num;
    } while (num != 0);

    cout << "sum= " << endl << sum;

    return 0;
}
