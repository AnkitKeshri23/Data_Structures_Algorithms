#include<iostream>
using namespace std;

void print(int n){

    if(n==0){
        return;
    }

    cout << n << " ";

    print(n-1);

    cout << n << " ";

}


int main(){

    int n;
    cout << "Enter any number " << endl;
    cin >> n;

    print(n);

    return 0;
}