#include<iostream>
using namespace std;

int main(){
    int num = 5; 

    cout<<num<<endl;

    // Address of operator

    cout<<"Address of num is: "<<&num<<endl;

    int *ptr = &num;
    
    cout<<"Address is: "<<ptr<<endl;
    cout<<"Value is: "<<*ptr<<endl;



    double d = 5.444;
    double *ptr2 = &d;

    cout<<"Address is: "<<ptr2<<endl;
    cout<<"Value is: "<<*ptr2<<endl;

    cout<<"Size of integer is: "<<sizeof(num)<<endl;
    cout<<"size of pointer is: "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is: "<<sizeof(ptr2)<<endl;


    return 0;
}