#include <iostream>
using namespace std;

struct Ticket {
    string name;
    int seatNo;
};

int main() {
    Ticket t[100];
    int booked = 0, choice;

    do {
        cout << "\n1. Book Ticket";
        cout << "\n2. Show Bookings";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cin.ignore();
            cout << "Passenger Name: ";
            getline(cin, t[booked].name);

            cout << "Seat Number: ";
            cin >> t[booked].seatNo;

            booked++;
            cout << "Ticket Booked Successfully.\n";
            break;

        case 2:
            for(int i=0;i<booked;i++) {
                cout << "\nPassenger: " << t[i].name;
                cout << "\nSeat: " << t[i].seatNo << endl;
            }
            break;
        }

    } while(choice!=3);

    return 0;
}