// Calculate the area of a hexagon

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s, area;

    cout << "Print the area of a hexagon:" << endl;
    cout << "----------------------------------" << endl;
    cout << " Input the side of the hexagon: ";
    cin >> s;

    area = (6 * pow(s, 2)) / (4 * tan(M_PI / 6));

    cout << " The area of the hexagon is: " << area;

    return 0;
}
