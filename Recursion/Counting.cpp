#include<iostream>
using namespace std;

void getCount(int n){
    if(n<=0)
    return ;

    // cout<<n<<endl;    //print in descending order

    getCount(n-1);

    cout<<n<<endl;  //Print in ascending order
    
}

int main(){
    cout<<"Please Enter the Input: "<<endl;
    int n;
    cin>>n;

    cout<<"Counting: "<<endl;
    getCount(n);

    return 0;
}