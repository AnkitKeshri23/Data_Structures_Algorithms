#include<iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int maximumSum = INT_MIN;
    int rowIndex = -1;

    for(int row=0; row<3; row++){
        int sum = 0;

        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }

        if(maximumSum < sum){
            maximumSum = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is: " << maximumSum << endl;
    return rowIndex;
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

    int ansInsex = largestRowSum(arr, 3, 3);
    cout << "Max row is at index: " << ansInsex << endl;


    return 0;
}
