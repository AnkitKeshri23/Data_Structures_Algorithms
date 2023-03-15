#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,5> b = {34, 23, 12, 44, 19};

    cout<<b.size()<<endl;

    int size = b.size();
    for(int i=0; i<size; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 3rd Index: "<<b.at(3)<<endl;

    cout<<"Empty or not: "<<b.empty()<<endl;

    cout<<"First element: "<<b.front()<<endl;

    cout<<"Last element: "<<b.back()<<endl;


    return 0;
}