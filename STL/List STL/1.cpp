#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    list<int> n(5, 100);
    cout<<"Printing n"<<endl;
    for(int b:n){
        cout<<b<<" ";
    }cout<<endl;

    l.push_back(1);
    l.push_front(2);

    
    for(int b:l){
        cout<<b<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After Erase: "<<endl;
    for(int b:l){
        cout<<b<<" ";
    }cout<<endl;

    return 0;
}