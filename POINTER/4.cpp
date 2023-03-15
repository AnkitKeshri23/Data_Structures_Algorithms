#include<iostream>
using namespace std;

int main(){

  /*  cout<<"Array"<<endl;
    int temp[10] = {1, 2};

    cout << sizeof(temp) << endl;   //Output 40
    cout << sizeof(*temp) << endl;  //Output 4
    cout << sizeof(&temp) << endl;  //Output 4
 
    cout<<"Pointer"<<endl;
    int *ptr = &temp[0];

    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
*/

   /* int a[20] = {1, 2, 3, 4, 5};
    cout << &a[0] << endl;

    int *ptr = &a[0];
    cout << &ptr << endl;*/

    int arr[10];
    // arr = arr+1;  ERROR

    int *p = &arr[0];
    cout << p << endl;
    p = p+1;
    cout << p << endl;   //Increases by 4-bit


    return 0;
}