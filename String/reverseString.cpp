#include<iostream>
#include<string.h>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int main(){
    
    char name[20];

    cout << "Enter your name: " << endl;
    cin.get(name, 20);

    cout << "Your name is " << name << endl;

    int len = strlen(name);
    cout << "Length: " << len << endl;

    reverse(name, len);

    cout << "Reverse name is " << name << endl;


    return 0;
}