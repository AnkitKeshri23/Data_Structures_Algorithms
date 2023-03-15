#include<iostream>
using namespace std;

int main(){
    int arr[] = {23, 141, 67, 34};

    cout<<"Address of first memory block is: "<< arr <<endl;

    cout<<arr[0]<<endl;

    cout<<"Address of first memory block is: "<< &arr[0] <<endl;

    cout<<"Value at first index: "<< *arr <<endl;   //Output 23
 
    cout<<"Incremented by 1: " << *arr+1 <<endl;

    cout<<"Incremented by 1: "<< *(arr)+1 << endl;

    cout<<"Incremented by 3: " << *arr+3 <<endl;

    cout<<"Value at 2nd index: "<< *(arr+1) <<endl;   //output 141

    cout<<"Value at 3rd index: "<<arr[2]<<endl;

    cout<<"Value at 3rd indeX: "<< *(arr+2) << endl;

    int i = 3;
    cout<<"Value at 4th index: "<< i[arr] << endl;

    return 0;
}