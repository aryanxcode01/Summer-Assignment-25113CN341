#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    float salary;
};

int main() {
    Employee emp[100];
    int n=0, choice;

    do {
        cout << "\n1. Add Employee";
        cout << "\n2. Display Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter ID: ";
            cin >> emp[n].id;
            cout << "Enter Name: ";
            cin >> emp[n].name;
            cout << "Enter Salary: ";
            cin >> emp[n].salary;
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++) {
                cout << emp[i].id << " "
                     << emp[i].name << " "
                     << emp[i].salary << endl;
            }
            break;

        case 3: {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found=false;

            for(int i=0;i<n;i++) {
                if(emp[i].id==id) {
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Salary: " << emp[i].salary << endl;
                    found=true;
                }
            }

            if(!found)
                cout << "Employee Not Found";
        }
        }

    } while(choice!=4);

    return 0;
}