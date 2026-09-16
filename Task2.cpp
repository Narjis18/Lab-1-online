#include <iostream>
using namespace std;

int main()
{
    double bsalary, total_sales, crate, total_salary;
    cout << "Enter the base salary: ";
    cin >> bsalary;
    cout << "Enter the number of sales: ";
    cin >> total_sales;
    cout << "Enter the commission rate: ";
    cin >> crate;
    total_salary = bsalary + (total_sales * crate);
    cout << "The total salary is: " << total_salary;
    
    return 0;
}