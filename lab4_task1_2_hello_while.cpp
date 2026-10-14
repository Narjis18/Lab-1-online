// Keep printing "hello" until the user enters 'n'

#include <iostream>
using namespace std;
int main()
{
    char ch;

    cout << "Enter character: ";
    cin >> ch;

    while (ch != 'n')
    {
        cout << "hello ";
        cin >> ch;
    }

    return 0;
}
