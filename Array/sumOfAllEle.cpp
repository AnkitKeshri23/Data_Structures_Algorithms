// write a C++ program to find sum of all elements in an array

#include<iostream>
using namespace std;


int sum(int num[], int size){
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum = sum + num[i];
    }
    return sum;
}


int main(){
   
    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;

    int num[100];

    cout<<"Enter the elements of an array: "<<endl;
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout<<"Sum of given array is: "<<sum(num, size)<<endl;

    return 0;
}