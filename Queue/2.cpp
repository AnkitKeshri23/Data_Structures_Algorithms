#include<iostream>
using namespace std;

class Queue{
    
    int *arr;
    int qfront;
    int rear;
    int size;   

    public:

    Queue(int size){
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
    }

    void push(int element){
        
        if(rear == size){
            cout << "Queue is full" << endl;
        }
        else{
            arr[rear] = element;
            rear++;
        }
    }

    int pop(){
        if(qfront==rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            return ans;
        }
    }

    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }

};



int main(){
    
    Queue q(5);

    q.push(6);
    q.push(4);
    q.push(5);
    

    cout << "Front element of queue is " << (q.front()) << endl;

    q.pop();

    cout << "Front element of queue is " << (q.front()) << endl;



    if(q.isEmpty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }


    return 0;
}