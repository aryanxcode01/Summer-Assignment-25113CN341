#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[100];
    int n = 0, choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter Roll No: ";
                cin >> s[n].roll;
                cout << "Enter Name: ";
                cin >> s[n].name;
                cout << "Enter Marks: ";
                cin >> s[n].marks;
                n++;
                break;

            case 2:
                cout << "\nStudent Records\n";
                for(int i=0;i<n;i++) {
                    cout << "Roll: " << s[i].roll
                         << " Name: " << s[i].name
                         << " Marks: " << s[i].marks << endl;
                }
                break;

            case 3: {
                int roll;
                cout << "Enter Roll No: ";
                cin >> roll;
                bool found = false;
                for(int i=0;i<n;i++){
                    if(s[i].roll==roll){
                        cout << "Name: " << s[i].name
                             << " Marks: " << s[i].marks << endl;
                        found = true;
                    }
                }
                if(!found)
                    cout << "Student Not Found";
                break;
            }
        }
    } while(choice!=4);
    return 0;
}