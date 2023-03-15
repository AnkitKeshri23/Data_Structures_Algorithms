#include<iostream>
using namespace std;

char toLowerCase(char ch){

    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch; 
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string str, int n){

    int s = 0; 
    int e = n-1;

    while(s<=e){
        if(toLowerCase(str[s]) != toLowerCase(str[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    
    cout << "Enter a string: " << endl; 
    string str;
    cin >> str;

    int n = str.length();

    if(checkPalindrome(str, n)){
        cout << "Its a palindrome." << endl;
    }
    else{
        cout << "Its not a palindrome" << endl;
    }


    return 0;
}