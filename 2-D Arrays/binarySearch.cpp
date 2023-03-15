#include <iostream>
using namespace std;

bool SearchMatrix(int arr[][3], int row, int col, int target)
{
   
    int start = 0;
    int end = row * col - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid/col][mid%col];
        if(element==target){
            return 1;
            // cout << mid;
        }
        if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{

    int arr[3][3] = {1, 2, 3, 5, 7, 8, 9, 12, 14};

    int target = 7;


    if(SearchMatrix(arr, 3, 3, target)){
    cout << "Element Found" << endl;
   }
   else{
    cout << "Element NOt Found" << endl; 
   }

    return 0;
}