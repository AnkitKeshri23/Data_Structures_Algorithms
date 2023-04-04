#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty " ;
            return -1;
        }
    }

    bool isEmpty(){
        if(top>=0){
            return false;
        }
        else
            return true;
    }

};

int main(){
    
    Stack s(5);
    s.push(12);
    s.push(19);
    s.push(78);

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    s.pop();

    cout << s.peek() << endl;
    
    if(s.isEmpty()){
        cout << "Stack is Empty" << endl;
    }
    else{
        cout << "Stack is not Empty" << endl;
    }



    return 0;
}