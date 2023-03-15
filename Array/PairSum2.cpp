#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

void pairSum(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    
    while(s<e){
        if(arr[s]+arr[e]==target){
            cout<<arr[s]<<" "<<arr[e];
            break;
        }
        else if(arr[s]+arr[e]<target){
            s++;       
        }
        else{
            e--; 
        }
    }
    // return -1; 
}

int main(){
    
    int arr[] = {12, 11, 44, 14, 9, 59};
    int target = 21;
    int n = 6;

    sort(arr, arr+n);

    cout<<"Pair sum of 25 is: "<<endl;
    pairSum(arr,n, target);

    return 0;
}