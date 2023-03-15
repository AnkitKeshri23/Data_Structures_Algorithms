#include<iostream>
using namespace std;

void reverse(string & s, int i, int j){
    
    cout << s << endl; 
    //base case
    if(i > j){
        return;
    }
    swap(s[i], s[j]);

    reverse(s, i+1, j-1);

}

int main(){
    
    cout << "Enter a string: " << endl;
    string s;
    getline(cin ,s);

    int n = s.length();

    reverse(s, 0, n-1);

    cout << s << endl;

    return 0;
}