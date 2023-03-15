#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key){

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}


int main(){
    int arr[] = {10, -4, 1, 55, -10, 5, 44, 67, -32, 0};

    cout<<"Enter the element you want to search for: "<<endl;
    int key;
    cin>>key;

    bool found = linearSearch(arr, 10, key);

    if(found){
        cout<<"Key is present.";
    }
    else{
        cout<<"Key is absent.";
    }
    return 0;
}