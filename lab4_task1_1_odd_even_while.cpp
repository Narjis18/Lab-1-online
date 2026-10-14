// Print the odd and even numbers from 0 to 10 using while loop

#include <iostream>
using namespace std;
int main()
{
    int i = 0;

    while (i <= 10)
    {
        if (i % 2 == 0)
            cout << i << " even" << endl;
        else
            cout << i << " odd" << endl;
        i++;
    }

    return 0;
}
