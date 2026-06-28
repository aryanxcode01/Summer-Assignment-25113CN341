#include <iostream>
using namespace std;

struct Contact {
    string name;
    string phone;
};

int main() {
    Contact c[100];
    int n = 0, choice;

    do {
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cin.ignore();
            cout << "Name: ";
            getline(cin, c[n].name);

            cout << "Phone: ";
            getline(cin, c[n].phone);

            n++;
            break;

        case 2:
            for(int i=0;i<n;i++) {
                cout << "\nName: " << c[i].name;
                cout << "\nPhone: " << c[i].phone << endl;
            }
            break;

        case 3:
            cin.ignore();
            string search;
            cout << "Enter Name: ";
            getline(cin, search);

            for(int i=0;i<n;i++) {
                if(c[i].name == search) {
                    cout << "\nContact Found";
                    cout << "\nName: " << c[i].name;
                    cout << "\nPhone: " << c[i].phone << endl;
                }
            }
            break;
        }

    } while(choice!=4);

    return 0;
}