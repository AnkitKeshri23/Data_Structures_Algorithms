#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n){
    int left = 0;
    int right = n-1;

    int step = 0;
    while(left < right){

        cout << "Step " << step++ << endl;
        printArray(arr, 9);
       
        if(arr[left] == 0 ){
            left ++;
        }
        
        if(arr[right] == 1 ){
            right--;
        }

        swap(arr[left], arr[right]);
            left++; 
            right--;
        
    }
}

int main(){
    
    int arr[9] = {1,1,0,0,1,0,1,0,1};

    sortOne(arr, 9);
    printArray(arr, 9);


    return 0;
}