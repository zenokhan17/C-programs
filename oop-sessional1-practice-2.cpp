#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if((number >= 10) && (number < 15)) {
        cout << "Nuber is >= 10 and its < 15" << endl;
    } else if ((number < 10) && (number >=5)) {
        cout << "Number is is < 10 and number is >=5" << endl;
    } else {
        cout << "number is good" << endl;
    }

    return 0;
}