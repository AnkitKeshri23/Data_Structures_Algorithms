#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start-(end-start)/2;
    }
    return -1;
}


int main(){
    int arr[]={23, 29, 41, 55, 67, 87};
    
    int answer = binarySearch(arr, 6, 41);

    cout<<"Index of 41 is: "<<answer<<endl;

   
    return 0;
}