#include<iostream>
using namespace std;

void print(int arr[], int size){
    cout << "size of array is: " << size << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}


int isSorted(int *arr, int size){
   print(arr, size);
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main(){

    cout << "Enter the number: " << endl;
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool ans = isSorted(arr, n);

    if(ans){
        cout << "Array is sorted." << endl;
    }
    else{
        cout << "Array is not sorted." << endl;
    }


    return 0;
}