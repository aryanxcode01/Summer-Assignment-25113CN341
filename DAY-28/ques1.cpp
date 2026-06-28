#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
    string author;
};

int main() {
    Book b[100];
    int n = 0, choice;

    do {
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice){
        case 1:
            cout << "Book ID: ";
            cin >> b[n].id;
            cin.ignore();
            cout << "Book Name: ";
            getline(cin, b[n].name);
            cout << "Author: ";
            getline(cin, b[n].author);
            n++;
            break;

        case 2:
            for(int i=0;i<n;i++){
                cout << "\nID: " << b[i].id;
                cout << "\nName: " << b[i].name;
                cout << "\nAuthor: " << b[i].author << "\n";
            }
            break;

        case 3:
            int id;
            cout << "Enter Book ID: ";
            cin >> id;
            for(int i=0;i<n;i++){
                if(b[i].id==id){
                    cout << "\nBook Found";
                    cout << "\nName: " << b[i].name;
                    cout << "\nAuthor: " << b[i].author;
                }
            }
            break;
        }
    } while(choice!=4);
    return 0;
}