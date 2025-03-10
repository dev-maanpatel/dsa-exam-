#include<iostream>
using namespace std;

int main() {
    int row, col, max;

    cout << "Enter the size of rows: ";
    cin >> row;

    cout << "Enter the size of cols: ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the number of [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    max = arr[0][0];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    cout << "The largest element is: " << max << endl;

    return 0;
}
