// Determine a student's grade from three courses' scores

#include <iostream>
using namespace std;
int main()
{
    double s1, s2, s3, avg;

    cout << "Enter the three courses' scores: ";
    cin >> s1 >> s2 >> s3;

    avg = (s1 + s2 + s3) / 3;
    cout << "Average score = " << avg << endl;

    if (avg >= 90 && avg <= 100)
        cout << "Grade A";
    else if (avg >= 70 && avg < 90)
        cout << "Grade B";
    else if (avg >= 50 && avg < 70)
        cout << "Grade C";
    else if (avg >= 0 && avg < 50)
        cout << "Grade F";
    else
        cout << "Invalid scores!";

    return 0;
}
