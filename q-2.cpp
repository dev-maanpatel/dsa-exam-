#include<iostream>

using namespace std;

int main(){

    int row , col , max = 0;

    cout << "Enter the size of rows :";
    cin >> row;

    cout << "Enter the size of col :";
    cin >> col;

   int arr[row][col];

   for(int i = 0 ; i < row ; i++){
    for (int j = 0 ; j < col ;  j++){
        cout << "Enter the Number " <<"[" << i << "]" << "[" << j << "]" ;
        cin >> arr[i][j];
    }
    for(int i = 0 ; i < col ; i++){
        for (int j = 0 ; j < row ; j++){
            if(arr[i][j] < max){
                cout << "The Largest element is : " << max ;
            }
        }
    }
   }
    return 0;
}