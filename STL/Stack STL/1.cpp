#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Ankit");
    s.push("Kumar");
    s.push("Keshri");
   
    cout<<"Top Element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element: "<<s.top()<<endl;
    
    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"Empty Or Not: "<<s.empty()<<endl;
    return 0;
}