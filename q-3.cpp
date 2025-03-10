#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cout << "enter the row of an array : ";
    cin >> rows;

    cout << "enter the column of an array : ";
    cin >> cols;

    int arr[rows][cols];
    int arr2[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element of an array at postion [" << i << "]" << "[" << j << "] : ";
            cin >> arr[i][j];
        }
    }
     for (int i = 0; i < cols; i++){
      for (int j = 0; j < rows; j++)
      {
           arr2[i][j]=arr[j][i];
           cout << arr2[i][j] <<" ";
      }
      cout << endl;
     }
    return 0;
}
