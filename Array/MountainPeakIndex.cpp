// Find peak Index in a Mountain Array

#include<iostream>
using namespace std;

int MountainArray(int arr[], int n){
    int start = 0; 
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[] = {23, 34, 35, 44, 11, 3, 2};
    cout<<"Peak Index is: "<<MountainArray(arr, 7);
    return 0;
}