#include <iostream>

using namespace std;
int main()
{
    int no_of_rooms{0};
    const int price_per_room{30};
    const double tax{0.06};

    // print welcome to fares cleaning service
    cout << "welcome to fares cleaning service\n";
    // ask for number of rooms
    cout << "please enter the number of rooms: ";
    cin >> no_of_rooms;
    // print price per room
    cout << "price per room: $" << price_per_room << "\n";
    // print tax
    cout << "tax: $" << tax << "\n";
    // calculate total cost
    cout << "total cost: $" << no_of_rooms * price_per_room << "\n";
    // calculate total tax
    cout << "total tax: $" << no_of_rooms * price_per_room * tax << "\n";
    cout << "================================================================" << endl;
    // calculate total price
    cout << "total price: $" << (no_of_rooms * price_per_room) + (no_of_rooms * price_per_room * tax) << "\n";
    // don't ad tips
    cout << "Please, Don't add any tips" << endl;
    cout << "press Enter to close" << endl;

    // wait for user input to close the program
    cin.ignore();
    cin.get();

    return 0;
}