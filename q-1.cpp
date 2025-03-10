#include<iostream>

using namespace std;

int main(){

    int size;

    cout << "Enter the size of array : ";
    cin >> size;

    int  arr[size];

    for(int i = 0 ; i < size ; i++){
        cout << "Enter the number " << i << " : " ;
        cin >> arr[i];
    }
    for(int i = 0 ; i < size ; i++){
        if(arr[i] < 0){
            cout << "Negative element from an Array : " << arr[i];
        }
        cout << endl;
    }


    return 0;
}