#include<iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==0)
        return 1;

    return n*factorial(n-1);
}


int main(){
    
    int num;
    cin>>num;

    int ans = factorial(num);

    cout<<"Answer is: "<<ans<<endl;


    return 0;
}