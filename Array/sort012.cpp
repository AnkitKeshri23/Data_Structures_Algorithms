//Dutch National Falg Algorithm

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

void sort012(int arr[], int size){

    int i = 0;
    int j = 0;
    int k = size-1;

    int step = 0;

    while(j<=k){
        cout << "Step " << step++ << endl;
        printArray(arr, size);
        if(arr[j] == 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1){
            j++;
        }
        else{
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

int main(){
    
    int arr[] = {1, 1, 0, 2, 0, 1};


    sort012(arr, 6);
    printArray(arr, 6);  


    return 0;
}