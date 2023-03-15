#include<iostream>
#include<queue>


using namespace std;

int main(){
    
    queue<int> q;

    q.push(1);
    cout << "Front element of queue is " << q.front() << endl; 
    q.push(4);

    q.push(7);

    cout << "Size of the queue is " << q.size() << endl;

    q.pop();
    q.pop();q.pop();

    cout << "Size of the queue is " << q.size() << endl;
 
    if(q.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty " << endl;
    }



    return 0;
}