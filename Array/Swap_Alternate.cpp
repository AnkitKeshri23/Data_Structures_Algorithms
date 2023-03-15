// Write a C++ program to swap the alternative numbers in an array

#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}

// void swapAlternate(int arr[], int n){
//     for(int i = 0; i < n; i+=2){
//         if(i+1 < n){
//             swap(arr[i], arr[i+1]);
//         }
//     }
// }

void swapAlternate(int arr[], int n) {
    int i=0;
    while(i<n){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
        i+=2;
    }
}

int main(){
    int even[] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[] = {11, -33, 3, 45, -9};

    printArray(even, 8);
    swapAlternate(even, 8);
    printArray(even, 8);

    cout<<endl;
    
    printArray(odd, 5);
    swapAlternate(odd, 5);
    printArray(odd, 5);


    return 0;
}

