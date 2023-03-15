#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;

    q.push("Ankit");
    q.push("Kumar");
    q.push("Keshri");

    cout<<"Size Before pop: "<<q.size()<<endl;

    cout<<"Top element: "<<q.front()<<endl;
    q.pop();
    cout<<"Top element: "<<q.front()<<endl;

    cout<<"Size After pop: "<<q.size()<<endl;

    return 0;
}