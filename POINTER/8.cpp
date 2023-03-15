#include<iostream>
using namespace std;

// int& func(int a){
//     int num = a;
//     int& ans = num;
//     return ans;
// };

// int* fun(int n){
//     int *ptr = &n;
//     return ptr;
// }

void update2(int &n){  //Pass by reference -->> same memory diff. name
    n++;
    cout << "Inside: " << n << endl;
}

void update(int n){   //Pass by value -->> diff. memory 
    n++;
    cout << "Inside: " << n << endl;
}

int main(){
    /*
    int i = 5;

    //Create a reference variable

    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    cout << i << endl;
    */

    int n = 5;

    cout << "Before: " << n << endl;
    update2(n);
    cout << "After: " << n << endl;


    // fun(n);

    return 0;
}