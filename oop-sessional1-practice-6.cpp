#include <iostream>
using namespace std;

int main() {
    int **twoDarray = new int*[3];
    
    // Allocate dynamic array values
    for(int i=0; i<3; i++) {
        twoDarray[i] = new int[3];
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            twoDarray[i][j] = j;
        }
    }

    // Print dynamic array
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << twoDarray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
