#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 5 Subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    cout << "\n------ Marksheet ------";
    cout << "\nName: " << name;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage << "%";

    if(percentage >= 90)
        cout << "\nGrade: A+";
    else if(percentage >= 75)
        cout << "\nGrade: A";
    else if(percentage >= 60)
        cout << "\nGrade: B";
    else if(percentage >= 40)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: Fail";

    return 0;
}