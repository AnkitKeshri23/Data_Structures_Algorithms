#include <iostream>
using namespace std;

int main(){

    //     int i = 5;

    //     int *p = &i;

    //     cout<<p<<endl;
    //     cout<<*p<<endl;

    //     int *q = 0;
    //     q = &i;

    //     cout<<q<<endl;
    //     cout<<*q<<endl;

    int num = 5;
    int a = num;
    cout << "Before: " << num << endl;
    a++;
    cout << "After: " << num << endl;
    //    num++;
    //    cout<<"Before: "<<num<<endl;

    int *p = &num;
    cout << "Before: " << num << endl;
    (*p)++;
    cout << "After: " << num << endl;

    //    copying a pointer

    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    // Important concept

    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    // cout<<(*t)++<<endl;
    *t = *t+1;
    cout<<*t<<endl;

    cout<<"Before t: "<<t<<endl;
    t = t+1;
    cout<<"After t: "<<t<<endl;  //Increase the 4-bit
    

    return 0;
}
