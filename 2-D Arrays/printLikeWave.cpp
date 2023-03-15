#include<iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col){
    for(col=0; col<3; col++){

        if(col%2 == 1){
            //Odd index -> bottom to top
            for(row = 2; row>=0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            //0 or even index -> top to bottom
            for(row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main(){

    int arr[3][3];

    cout << "Enter the elements: " << endl << endl;

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin >> arr[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout << arr[row][col] << " ";
        }cout << endl;
    }

    wavePrint(arr, 3, 3);



    return 0;
}