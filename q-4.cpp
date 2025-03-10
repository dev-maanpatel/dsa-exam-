#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main() {
    int row, cols, rowchoise = 0, colcho = 0, sum = 0;

    cout << "enter the row of an array : ";
    cin >> row;
    cout << "enter the column of an array : ";
    cin >> cols;

    int arr[row][cols];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Enter the element of an array at position [" << i << "][" << j << "] : ";
            cin >> arr[i][j];
        }

    cout << "enter the chosen row :";
    cin >> rowchoise;

    cout << "Element of row " << rowchoise << " ";
    for (int i = 0; i < cols; i++) {
        cout << arr[rowchoise][i] << " ";
        sum += arr[rowchoise][i];
    }
    cout << endl << "Sum is : " << sum << " " << endl;

    sum = 0;
    cout << "enter the chosen cols :";
    cin >> colcho;

    cout << "Element of col " << colcho << " ";
    for (int i = 0; i < row; i++) {
        cout << arr[i][colcho] << " ";
        sum += arr[i][colcho];
    }
    cout << endl << "Sum is : " << sum << " " << endl;

    return 0;
}
