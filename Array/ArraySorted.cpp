#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    
     // Array has one or no element
    if (n == 0 || n == 1)
        return true;
 
    for (int i = 0; i < n; i++){
 
        // Unsorted pair found
        if (arr[i ] > arr[i+1])
            return false;
    }
    // No unsorted pair found
    return true;

}

int main(){
    int arr[] = {1, 5, 9, 10, 3};
    int n = 5;

    if(isSorted(arr, 5)){
        cout <<"Array is Sorted." << endl;
    }
    else{
        cout << "Array is not sorted." << endl;
        cout << "This is Mr. Vaibhav Anand" << endl;
    }
    return 0;
}











