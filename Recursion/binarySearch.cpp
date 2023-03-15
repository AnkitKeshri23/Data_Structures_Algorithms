#include<iostream>
using namespace std;

void print(int arr[], int s, int e){
    cout << "Array is ";
    for(int i=s; i<=e; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch(int arr[], int s, int e, int key){

    print(arr, s, e);

    if(s>e){
        return false;
    }

    int mid = s+(e-s)/2;
   
    cout << "Mid value of the above array is " << arr[mid] << endl << endl;

    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
    
}

int main(){
    
    int arr[6] = {12, 34, 66, 76, 89, 95};

    int key = 95;

    cout << endl << "Key is " << key << endl << endl;
    
    if(binarySearch(arr, 0, 5, key)){
        cout << "Key is Present." << endl << endl;
    }
    else{
        cout << "Kay is not present." << endl;
    }

    return 0;
}