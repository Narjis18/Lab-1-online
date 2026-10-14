// Calculate the distance between two points using pow and sqrt

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2, distance;
    int choice;

    do
    {
        cout << "Please enter the first point (x1,y1): " << endl;
        cin >> x1 >> y1;
        cout << "Please enter the second point (x2,y2): " << endl;
        cin >> x2 >> y2;

        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        cout << "The distance between the two points = " << distance << endl;

        cout << "Press Zero if you want to stop, and One to continue" << endl;
        cin >> choice;
        cout << endl;
    } while (choice == 1);

    cout << "End of the program!!";

    return 0;
}
