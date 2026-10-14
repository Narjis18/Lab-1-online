// Finding the maximum of three numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "Enter three numbers";
    cin >> a >> b >> c;
    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    cout << "Max is: " << max;

    return 0;
}
