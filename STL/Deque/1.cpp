#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    deque<int> n(4, 10);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    d.push_back(23);
    d.push_front(49);

    cout<<"Front: "<<d.front()<<endl;
    cout<<"Last: "<<d.back()<<endl;
    cout<<"Print First Index Element: "<<d.at(1)<<endl;


    cout<<"Empty Or Not: "<<d.empty()<<endl;

    cout<<"Printing d before erase: "<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size Before Erase: "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"Size After Erase: "<<d.size()<<endl;

    cout<<"Printing d after erase: "<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
    return 0;
}