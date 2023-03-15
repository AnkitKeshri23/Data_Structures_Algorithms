#include<iostream>
using namespace std;

int main(){
    
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;    // print the address of Oth index element
    cout << ch << endl;     // print the entire content

    int *ptr = &arr[0];
    cout << ptr << endl;   // print the address of Oth index element

    char *c = &ch[0];
    cout << c << endl;      // Print the entire content

    char temp = 'k';
    char *p = &temp;

    cout << p << endl;

    return 0;
}   