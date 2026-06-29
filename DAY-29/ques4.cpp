#include <iostream>
#include <string>
using namespace std;

class Inventory {
public:
    int id, quantity;
    string name;
    float price;

    void input() {
        cout << "\nEnter Product ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display() {
        cout << "\nProduct ID : " << id;
        cout << "\nProduct Name : " << name;
        cout << "\nPrice : " << price;
        cout << "\nQuantity : " << quantity;
    }
};

int main() {
    Inventory item[100];
    int count = 0, choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT =====";
        cout << "\n1. Add Product";
        cout << "\n2. Display Products";
        cout << "\n3. Search Product";
        cout << "\n4. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                item[count].input();
                count++;
                break;

            case 2:
                if (count == 0)
                    cout << "No products available.";
                else
                    for (int i = 0; i < count; i++) {
                        cout << "\n----------------";
                        item[i].display();
                    }
                break;

            case 3: {
                int id, found = 0;
                cout << "Enter Product ID: ";
                cin >> id;

                for (int i = 0; i < count; i++) {
                    if (item[i].id == id) {
                        item[i].display();
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.";
                break;
            }

            case 4:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}