#include<iostream>
using namespace std;

// For Sorted array

void interSection(int arr1[], int arr2[], int n, int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else
           j++;
    }
}

int main(){
    cout<<"ENter the size of array1: ";
    int size1;
    cin>>size1;
    int arr1[100];

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    cout<<"ENter the size of array2: ";
    int size2;
    cin>>size2;
    int arr2[100];

    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }

    cout<<"The common elements from the both array are: "<<endl;
    interSection(arr1, arr2, size1, size2);

    return 0;
}