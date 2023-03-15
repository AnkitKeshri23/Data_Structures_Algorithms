#include<iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[], int n){
    // For round 1 to n-1
    for(int i=1; i<=n; i++){
           bool swapped = false;
        //  process till n-i th index
        for(int j=0; j<n-i; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // Already sorted
    if(swapped==false){
        break;
    }
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
    cout<<endl;

    cout<<"Array after sorting: "<<endl;
    bubbleSort(arr, n);
    display(arr, n);


    return 0;
}   