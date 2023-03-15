#include<iostream>
using namespace std;

void print(int arr[], int size){
    cout << "size of array is: " << size << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }cout << endl;
}


int getSum(int *arr, int size){
    print(arr, size);
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    
    // int remainingPart = getSum(arr+1, size-1);
    // int sum = arr[0]+ remainingPart;
    // return sum;

    return arr[0] + getSum(arr+1,size-1);

}

int main(){
    int arr[5] = {12, 23, 12 ,12 ,12,};

    int size = 5;

    int sum = getSum(arr, size);

    cout << "sum is: " << sum << endl;

    return 0;
}