// Maximum contiguous subarray sum


#include<iostream>
using namespace std;

int maxSumSubarray(int arr[], int  n){

    int currSum = 0;
    int maximumSum = arr[0];

    for(int i=0; i<n; i++){
        currSum = currSum + arr[i];

        if(currSum > maximumSum){
            maximumSum = currSum;
        }
        if(currSum < 0){
            currSum = 0;
        }
    } 
    return maximumSum;
}

int main(){
    
    int arr[6] = {5,-4, -2, 6, 7, -1};

    int maxSum = maxSumSubarray(arr, 6);

    cout << "Maximum Sum is: " << maxSum;


    return 0;
}