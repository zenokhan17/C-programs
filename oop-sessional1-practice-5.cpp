#include <iostream>
using namespace std;

void display(int *p) {
    cout << *p << endl;
}

int main() {
    int n = 1;
    cout << &n << endl;

    int *p = &n;
    cout << *(&p) << endl;

    int &ref = n;
    cout << &ref << endl;

    display(p);

    return 0;
}
