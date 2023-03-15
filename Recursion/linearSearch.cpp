#include<iostream>
using namespace std;

void print(int arr[], int size){
    cout << "size of array is: " << size << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}


bool linearSearch(int arr[], int size, int k){
    print(arr, size);
    if(size==0){
        return false;
    }
    if(arr[0] == k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}

int main(){
    int arr[5] = {3, 5, 4, 2, 7};
    int key = 7;

    int size = 5;

    int ans = linearSearch(arr, size, key);
    if(ans){
        cout << "Key is present." << endl;
    }
    else{
         cout << "Key is not present." << endl;
    }
    return 0;
}