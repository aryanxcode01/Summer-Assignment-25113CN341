#include <iostream>
using namespace std;

struct Account {
    int accNo;
    string name;
    float balance;
};

int main() {
    Account a;
    int choice;
    float amount;

    cout << "Enter Account Number: ";
    cin >> a.accNo;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, a.name);

    cout << "Enter Initial Balance: ";
    cin >> a.balance;

    do {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Amount: ";
            cin >> amount;
            a.balance += amount;
            break;

        case 2:
            cout << "Amount: ";
            cin >> amount;
            if(amount <= a.balance)
                a.balance -= amount;
            else
                cout << "Insufficient Balance";
            break;

        case 3:
            cout << "\nAccount No: " << a.accNo;
            cout << "\nName: " << a.name;
            cout << "\nBalance: " << a.balance << endl;
            break;
        }

    } while(choice!=4);
    return 0;
}