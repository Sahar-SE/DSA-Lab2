#include <iostream>
using namespace std;

int main() {
    // cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    // cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    // cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    // cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    // cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    int list[5] = {3, 6, 9, 12, 15};
    int *pArr = list;

    for (int i = 0; i < 5; i++) {
        cout << *(pArr + i) << " ";
    }

    cout << endl;

    return 0;
}
