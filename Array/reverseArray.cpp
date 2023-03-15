// Write a C++ program to reverse an element of an array

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){

    int arr[] = {-32, 43, 4, 0, -2, 54, -23};
    int brr[] = {2, 45, 54, 12, 1};

    cout<<endl;
    printArray(arr, 7);
    reverseArray(arr, 7);
    printArray(arr, 7);

    cout<<endl<<endl;;

    printArray(brr, 5);
    reverseArray(brr, 5);
    printArray(brr, 5);

    cout<<endl;



    return 0;
}