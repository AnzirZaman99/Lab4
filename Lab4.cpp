#include <iostream>
using namespace std;

int main() {
    int street;

    // Ask user for street number
    cout << "Enter a street location number on the A train line: " << endl;
    cin >> street;

    cout << endl;

    // Conditionals to determine neighborhood
    if (street >= 190 && street <= 207) {
        cout << "You are in Inwood / Washington Heights." << endl;
        cout << "This is Upper Manhattan and very residential." << endl;
    }
    else if (street >= 145 && street < 190) {
        cout << "You are in Harlem." << endl;
        cout << "Central Harlem has rich culture and history." << endl;
    }
    else if (street >= 59 && street < 145) {
        cout << "You are on the Upper West Side near Central Park." << endl;
    }
    else if (street >= 34 && street < 59) {
        cout << "You are in Midtown Manhattan." << endl;
        cout << "Busy area with offices, food, and tourists." << endl;
    }
    else if (street >= 14 && street < 34) {
        cout << "You are in Chelsea." << endl;
        cout << "Fun spot here is Chelsea’s Dallas BBQ." << endl;
    }
    else if (street >= 1 && street < 14) {
        cout << "You are in Lower Manhattan." << endl;
    }
    else {
        cout << "Train doesn’t go to upstate NY." << endl;
    }

    return 0;
}
