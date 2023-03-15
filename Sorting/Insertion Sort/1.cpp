#include<iostream>
using namespace std;

void display(int arr[], int n){
   for(int i = 0; i<n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for (int j = i-1; j>=0; j--){
            if(arr[j]>temp){
                // Shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main(){
    cout<<"Enter the length of the array: "<<endl;
    int n;
    cin>>n;

    int arr[100];
    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<"Array before sorting: "<<endl;
    // display(arr, n);

    cout<<"Array after sorting: "<<endl;
    insertionSort(arr, n);
    display(arr, n);

    return 0;
}