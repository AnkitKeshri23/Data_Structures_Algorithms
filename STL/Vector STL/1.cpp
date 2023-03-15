#include<iostream>
#include<vector>
using namespace std;

// Vector-> Dynamic Array

int main(){
    vector<int> v;

    vector<int> a(5, 1);
    
    cout<<"Print a: "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity of empty vector : "<<v.capacity()<<endl;

    v.push_back(12);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(14);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(24);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(39);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(67);
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"size: "<<v.size()<<endl;


    cout<<"Front Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;

    cout<<"Before Pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After Pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;





    return 0;
}