#include <iostream>
using namespace std;

int main() {
    string name;
    float basic, hra, da, gross;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    hra = basic * 0.20;
    da = basic * 0.10;
    gross = basic + hra + da;

    cout << "\nSalary Slip";
    cout << "\nEmployee : " << name;
    cout << "\nBasic Salary : " << basic;
    cout << "\nHRA : " << hra;
    cout << "\nDA : " << da;
    cout << "\nGross Salary : " << gross;

    return 0;
}