#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 100;

// Arrays
int roll[MAX];
string name[MAX];
float marks[MAX];
char grade[MAX];

int total = 0;

// Function Prototypes
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void calculateGrades();
void averageMarks();
void highestMarks();
void lowestMarks();
void countPassFail();
void sortByMarks();
void sortByName();

char findGrade(float m) {
    if (m >= 90)
        return 'A';
    else if (m >= 75)
        return 'B';
    else if (m >= 60)
        return 'C';
    else if (m >= 40)
        return 'D';
    else
        return 'F';
}

void addStudent() {
    if (total == MAX) {
        cout << "Database Full!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> roll[total];

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name[total]);

    cout << "Enter Marks: ";
    cin >> marks[total];

    grade[total] = findGrade(marks[total]);

    total++;

    cout << "Student Added Successfully.\n";
}

void displayStudents() {

    if (total == 0) {
        cout << "No Records Found.\n";
        return;
    }

    cout << "\n---------------------------------------------------------\n";
    cout << left << setw(10) << "Roll"
         << setw(25) << "Name"
         << setw(10) << "Marks"
         << setw(10) << "Grade";
    cout << "\n---------------------------------------------------------\n";

    for (int i = 0; i < total; i++) {
        cout << left << setw(10) << roll[i]
             << setw(25) << name[i]
             << setw(10) << marks[i]
             << setw(10) << grade[i] << endl;
    }
}

void searchStudent() {

    int r;

    cout << "Enter Roll Number: ";
    cin >> r;

    for (int i = 0; i < total; i++) {

        if (roll[i] == r) {

            cout << "\nStudent Found\n";
            cout << "Roll  : " << roll[i] << endl;
            cout << "Name  : " << name[i] << endl;
            cout << "Marks : " << marks[i] << endl;
            cout << "Grade : " << grade[i] << endl;
            return;
        }
    }

    cout << "Student Not Found.\n";
}

void updateStudent() {

    int r;

    cout << "Enter Roll Number: ";
    cin >> r;

    for (int i = 0; i < total; i++) {

        if (roll[i] == r) {

            cin.ignore();

            cout << "Enter New Name: ";
            getline(cin, name[i]);

            cout << "Enter New Marks: ";
            cin >> marks[i];

            grade[i] = findGrade(marks[i]);

            cout << "Record Updated Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

void deleteStudent() {

    int r;

    cout << "Enter Roll Number: ";
    cin >> r;

    for (int i = 0; i < total; i++) {

        if (roll[i] == r) {

            for (int j = i; j < total - 1; j++) {

                roll[j] = roll[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
                grade[j] = grade[j + 1];
            }

            total--;

            cout << "Record Deleted Successfully.\n";
            return;
        }
    }

    cout << "Student Not Found.\n";
}

void calculateGrades() {

    for (int i = 0; i < total; i++)
        grade[i] = findGrade(marks[i]);

    cout << "Grades Updated.\n";
}

void averageMarks() {

    if (total == 0) {
        cout << "No Records.\n";
        return;
    }

    float sum = 0;

    for (int i = 0; i < total; i++)
        sum += marks[i];

    cout << "Average Marks = " << sum / total << endl;
}

void highestMarks() {

    if (total == 0) {
        cout << "No Records.\n";
        return;
    }

    int index = 0;

    for (int i = 1; i < total; i++) {

        if (marks[i] > marks[index])
            index = i;
    }

    cout << "\nHighest Scorer\n";
    cout << "Roll : " << roll[index] << endl;
    cout << "Name : " << name[index] << endl;
    cout << "Marks: " << marks[index] << endl;
}

void lowestMarks() {

    if (total == 0) {
        cout << "No Records.\n";
        return;
    }

    int index = 0;

    for (int i = 1; i < total; i++) {

        if (marks[i] < marks[index])
            index = i;
    }

    cout << "\nLowest Scorer\n";
    cout << "Roll : " << roll[index] << endl;
    cout << "Name : " << name[index] << endl;
    cout << "Marks: " << marks[index] << endl;
}

void countPassFail() {

    int pass = 0, fail = 0;

    for (int i = 0; i < total; i++) {

        if (marks[i] >= 40)
            pass++;
        else
            fail++;
    }

    cout << "Passed Students : " << pass << endl;
    cout << "Failed Students : " << fail << endl;
}

void sortByMarks() {

    for (int i = 0; i < total - 1; i++) {

        for (int j = 0; j < total - i - 1; j++) {

            if (marks[j] > marks[j + 1]) {

                swap(marks[j], marks[j + 1]);
                swap(roll[j], roll[j + 1]);
                swap(name[j], name[j + 1]);
                swap(grade[j], grade[j + 1]);
            }
        }
    }

    cout << "Sorted by Marks.\n";
}

void sortByName() {

    for (int i = 0; i < total - 1; i++) {

        for (int j = 0; j < total - i - 1; j++) {

            if (name[j] > name[j + 1]) {

                swap(name[j], name[j + 1]);
                swap(roll[j], roll[j + 1]);
                swap(marks[j], marks[j + 1]);
                swap(grade[j], grade[j + 1]);
            }
        }
    }

    cout << "Sorted by Name.\n";
}

int main() {

    int choice;

    do {

        cout << "\n========== COLLEGE MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Calculate Grades\n";
        cout << "7. Average Marks\n";
        cout << "8. Highest Marks\n";
        cout << "9. Lowest Marks\n";
        cout << "10. Count Pass/Fail\n";
        cout << "11. Sort By Marks\n";
        cout << "12. Sort By Name\n";
        cout << "13. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: calculateGrades(); break;
            case 7: averageMarks(); break;
            case 8: highestMarks(); break;
            case 9: lowestMarks(); break;
            case 10: countPassFail(); break;
            case 11: sortByMarks(); break;
            case 12: sortByName(); break;
            case 13: cout << "Thank You!\n"; break;
            default: cout << "Invalid Choice.\n";
        }

    } while (choice != 13);

    return 0;
}