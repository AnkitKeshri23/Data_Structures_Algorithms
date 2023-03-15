#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    cout << "Array after sorting: "<< endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
    }cout << endl; 
}        
  
void tripletSum(int arr[], int n, int target){
    
    printArray(arr, n);
    for(int i=0; i<n; i++){

        int l = i+1;
        int r = n-1;

        while(l<r){

            int sum = arr[i] + arr[l] + arr[r];

            if(sum==target){
                cout << "Target is: " << target << endl;
                cout << "The triplet sum is at index: " << i << " " << l << " " << r << endl;
                cout << "The element of triplet sum are: " << arr[i] <<" " << arr[l] << " " << arr[r] << endl;
                break;
            }
            else if(sum < target) {
                l++;
            }
            else{
                r--;
            }
        }
    }
}

int main(){
    
    int arr[] = {12, 34, 19, 14, 9, 11};
    int target = 40;
    int n = 6;

    sort(arr, arr+n);

    tripletSum(arr, n, target);

    return 0;
}