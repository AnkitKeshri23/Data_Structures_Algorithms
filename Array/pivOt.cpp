#include<iostream>
using namespace std;

// rotated sorted array

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = arr[mid];
        }
        mid = start-(end-start)/2;
    }
    return end;
}

int main(){
    int arr[] = {3, 8, 10, 1, 3};

    cout<<"Pivot Element is: "<<getPivot(arr, 5);
    return 0;
}