#include<iostream>
using namespace std;

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;  
    *b = temp;
}

void display(int *arr, int n){
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

void bubbleSort(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        int swaps = 0;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                Swap(&arr[j], &arr[j+1]);
                swaps = 1;
            }
        }
    if(!swaps)
    break;
    }
}

int main(){
    int n; 
    cout<<"Enter the number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting: "<<endl;
    display(arr, n);

    cout<<"Arary after sorting: "<<endl;
    bubbleSort(arr, n);
    display(arr, n);
    return 0;
}