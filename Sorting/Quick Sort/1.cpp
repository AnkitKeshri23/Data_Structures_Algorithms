#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){

    // 1.Take first element as a pivot
    int pivot = arr[s];

    //2.Count all the element < than pivot
    int cnt = 0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    //take pivot to its right position
    int pivotIndex = s+cnt;
    swap(arr[s], arr[pivotIndex]);


    //take care of left and right part  (<pivot<)
    int i=s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i] <= pivot){
            i++;
        }

        else if(arr[j] > pivot){
            j--;
        }

        else{
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}


void quickSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        return;
    }

    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);  //left part
    quickSort(arr, p+1, e);  //right part
}


int main(){

    cout << "Enter the array length: " ;
    int n;
    cin >> n;

    cout << "Enter the value in an array "<<endl;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Before Sorted" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;

    quickSort(arr, 0, n-1);

    cout << "After Sorted " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}