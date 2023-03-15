#include<iostream>
using namespace std;

int getFab(int n){
    
    if(n==0 || n==1)
    return n;

    return getFab(n-1)+getFab(n-2);
    
}

int main(){
    int n;
    cout<< "Please Enter the Input: " << endl;  
    cin >> n;

    cout << "Value of "<< n << "th fabonacci is: " << getFab(n);

    return 0;
}