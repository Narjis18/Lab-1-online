// Read a character and convert its case, or report if it is a digit or special character

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch))
        cout << "Your character '" << ch << "' is in lowercase. Its uppercase is " << (char)toupper(ch);
    else if (isupper(ch))
        cout << "Your character '" << ch << "' is in uppercase. Its lowercase case is " << (char)tolower(ch);
    else if (isdigit(ch))
        cout << "Your character '" << ch << "' is a digit.";
    else
        cout << "Your character '" << ch << "' special character";

    return 0;
}
