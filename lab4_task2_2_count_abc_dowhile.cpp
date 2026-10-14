// Count the times 'a', 'b', 'c' were entered (do..while), stop when 'x' is entered

#include <iostream>
using namespace std;
int main()
{
    char ch;
    int countA = 0, countB = 0, countC = 0;

    do
    {
        cout << "Enter a character (to EXIT enter x): ";
        cin >> ch;

        if (ch == 'a')
            countA++;
        else if (ch == 'b')
            countB++;
        else if (ch == 'c')
            countC++;
    } while (ch != 'x');

    cout << "Number of 'a' character is: " << countA << endl;
    cout << "Number of 'b' character is: " << countB << endl;
    cout << "Number of 'c' character is: " << countC << endl;

    return 0;
}
