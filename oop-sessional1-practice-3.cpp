#include <iostream>
using namespace std;

int main() {
    // int number;
    // cout << "Enter a number: ";
    // cin >> number;
    int location[2] = {0, 3};

    switch (location[0]) {
        case 0:
            cout << "Not in store.\n";
            break;
        case 1:
            cout << "Available in store.\n";
            break;
        default:
            cout << "No cases match\n";
    }

    switch (location[1]) {
        case 1:
            cout << "Product on shelf 1\n";
            break;
        case 2:
            cout << "Product on shelf 2\n";
            break;
        case 3:
            cout << "Product on shelf 3\n";
            break;
    }

    return 0;
}
