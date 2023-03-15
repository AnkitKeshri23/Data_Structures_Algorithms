#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    
    for(int i = 0; i<n; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
    swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arr[100];

    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;

    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array before sorting: "<<endl;
    display(arr, n);

    cout<<"Array after sorting: "<<endl;
    selectionSort(arr, n);
    display(arr, n);


    return 0;
}