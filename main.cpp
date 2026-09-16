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
    // int a = 5, b = 10;
    // cout << "Before: a = " << a << ", b = " << b << endl;
    // swapByAddress(&a, &b);
    // cout << "After: a = " << a << ", b = " << b << endl;

    // int *pa = &a;
    // int *pb = &b;
    // int **ppa = &pa;
    // int **ppb = &pb;
    // cout << "Before: *pa = " << *pa << ", *pb = " << *pb << endl;
    // swapByPointerToPointer(ppa, ppb);
    // cout << "After: *pa = " << *pa << ", *pb = " << *pb << endl;

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



    // int rows, cols;

    // cout << "Enter number of students: ";
    // cin >> rows;

    // while (rows <= 0) {
    //     cout << "Rows must be greater than 0: ";
    //     cin >> rows;
    // }

    // cout << "Enter number of subjects: ";
    // cin >> cols;

    // while (cols <= 0) {
    //     cout << "Cols must be greater than 0: ";
    //     cin >> cols;
    // }
    // int** marks = new int*[rows];
    // for (int r = 0; r < rows; r++) {
    //     marks[r] = new int[cols];
    // }

    // cout << "Enter marks (0 to 100) row by row:\n";
    // for (int r = 0; r < rows; r++) {
    //     for (int c = 0; c < cols; c++) {
    //         cin >> *(*(marks + r) + c);
    //     }
    // }
    // cout << "\nMatrix:\n";
    // for (int r = 0; r < rows; r++) {
    //     for (int c = 0; c < cols; c++) {
    //         cout << *(*(marks + r) + c) << " ";
    //     }
    //     cout << endl;
    // }

    // int bestTotal = -1;
    // int bestStudent = 1;

    // cout << "\ntotals:\n";
    // for (int r = 0; r < rows; r++) {
    //     int total = 0;

    //     for (int c = 0; c < cols; c++) {
    //         total += *(*(marks + r) + c);
    //     }

    //     cout << "Student " << r + 1 << ": " << total << endl;
    //     if (r == 0 || total > bestTotal) {
    //         bestTotal = total;
    //         bestStudent = r + 1;
    //     }
    // }

    // cout << "\nTop student: " << bestStudent << endl;
    // cout << "Highest total: " << bestTotal << endl;
    // for (int r = 0; r < rows; r++) {
    //     delete[] marks[r];
    // }
    // delete[] marks;
    // marks = nullptr;



    int n;
    cout << "Enter n (1 to 10): ";
    cin >> n;
    while (n < 1 || n > 10) {
        cout << "n must be between 1 and 10. Try again: ";
        cin >> n;
    }
    int* marks = new int[n];
    cout << "Enter " << n << " marks:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(marks + i);
    }
    int newMark;
    cout << "Enter the additional mark: ";
    cin >> newMark;

    int* newMarks = new int[n + 1];
    for (int i = 0; i < n; i++) {
        *(newMarks + i) = *(marks + i);
    }

    *(newMarks + n) = newMark;
    delete[] marks;
    marks = newMarks;

    cout << "\nUpdated marks: ";
    for (int i = 0; i < n + 1; i++) {
        cout << *(marks + i) << " ";
    }
    cout << endl;
    delete[] marks;

    return 0;
}
