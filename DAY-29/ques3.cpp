#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str;
    int choice;

    cin.ignore();
    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n===== STRING MENU =====";
        cout << "\n1. Display String";
        cout << "\n2. Find Length";
        cout << "\n3. Reverse String";
        cout << "\n4. Convert to Uppercase";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "String: " << str;
                break;

            case 2:
                cout << "Length = " << str.length();
                break;

            case 3: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed = " << temp;
                break;
            }

            case 4: {
                string temp = str;
                for (char &c : temp)
                    c = toupper(c);
                cout << "Uppercase = " << temp;
                break;
            }

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 5);

    return 0;
}