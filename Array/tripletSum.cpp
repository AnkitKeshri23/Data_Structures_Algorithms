#include<iostream>
using namespace std;

void tripletSum(int arr[], int n, int sum){

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){

            for(int k=j+1; k<n; k++){

                if(arr[i]+arr[j]+arr[k]==sum){

                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;

                }
            }
        }
    }
}

int main(){

    int arr[] = {19, 4, 8, 11, 7, 6, 2};

    int sum = 19;

    cout<<"The Triplet sum of 19 are: "<<endl;

    tripletSum(arr, 7, sum);

    return 0;
    
}