#include<iostream>
using namespace std;

bool isPalindrome(string s, int i, int j){

    // cout << s << endl;
    //base case
    // if(s.length() == 0){
    //     return true;
    // }
    if(i >= j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    else{
        bool ans = isPalindrome(s, i+1, j-1);
        return ans;
    }
}

int main(){
    
    cout << "Enter a string: " << endl;
    string s;
    cin >> s;

    int n = s.length();

    int ans = isPalindrome(s, 0, n-1);

    if(ans){
        cout << "Its a palindrome." << endl;
    }
    else{
        cout << "Its not a palindrome." << endl;
    }


    return 0;
}