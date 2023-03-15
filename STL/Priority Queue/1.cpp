#include<iostream>
#include<queue>
using namespace std;

int main(){
    // Max_Heap
    priority_queue<int> max;

    // Min_heap
    priority_queue<int,vector<int> , greater<int> > min;

    max.push(12);
    max.push(32);
    max.push(45);
    max.push(9);
    max.push(27);

    cout<<"Size->"<<max.size()<<endl;
    int n = max.size();

    for(int i=0; i<n; i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;

    cout<<"Empty Or NOt: "<<min.empty()<<endl;
    


    min.push(32);
    min.push(12);
    min.push(98);
    min.push(1);
    min.push(43);

    cout<<"Size->"<<min.size()<<endl;
    int m = min.size();

    for(int i=0; i<m; i++){
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;

    cout<<"Empty Or NOt: "<<min.empty()<<endl;


    return 0;
}