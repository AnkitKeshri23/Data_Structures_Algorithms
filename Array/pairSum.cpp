#include<iostream>
using namespace std;

void pairSum(int arr[], int n, int sum){
    for(int i = 0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j] == sum){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

int main(){
    int arr[] = {8, 1, 7, 2, 5, 6};
    int sum = 8;
    
    cout<<"The sum pair of 8 are at the index of: "<<endl;
    pairSum(arr, 6, sum);
    return 0;
}