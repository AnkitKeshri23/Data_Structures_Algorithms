// Write a C++ program to find duplicates in an array

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Duplicates(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}

// void Duplicates(int arr[], int size){

//     int i=0;
//     while(i<size){

//     int j = i+1;   
//     if(j<size){
//         if(arr[i] == arr[j]){
//             cout << arr[i] << " ";
//             // break;
//         }
//     }
//   }
// }

int main(){
    cout<<"Enter the size of an array: "<<endl;
    int size;
    cin>>size;

    int num[110];
    cout<<"Enter the elements of an array: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout<<"Duplicates are: "<<" ";
    Duplicates(num, size);

    return 0;
}