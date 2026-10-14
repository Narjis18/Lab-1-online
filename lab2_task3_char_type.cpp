#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character:";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is a capital letter";
    else if (ch >= 'a' && ch <= 'z')
        cout << ch << " is a small letter";
    else if (ch >= '0' && ch <= '9')
        cout << ch << " is a digit";
    else
        cout << ch << " is a special symbol";
    return 0;
}
