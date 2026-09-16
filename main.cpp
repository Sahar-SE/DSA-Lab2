#include <iostream>
using namespace std;

void swapByAddress(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapByPointerToPointer(int **x, int **y) {
    int *temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 10;
    cout << "Before: a = " << a << ", b = " << b << endl;
    swapByAddress(&a, &b);
    cout << "After: a = " << a << ", b = " << b << endl;

    int *pa = &a;
    int *pb = &b;
    int **ppa = &pa;
    int **ppb = &pb;
    cout << "Before: *pa = " << *pa << ", *pb = " << *pb << endl;
    swapByPointerToPointer(ppa, ppb);
    cout << "After: *pa = " << *pa << ", *pb = " << *pb << endl;

    // cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    // cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    // cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    // cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    // cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    // int list[5] = {3, 6, 9, 12, 15};
    // int *pArr = list;

    // for (int i = 0; i < 5; i++) {
    //     cout << *(pArr + i) << " ";
    // }

    // cout << endl;




    return 0;
}
