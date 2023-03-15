#include<iostream>
using namespace std;

void removeVowels(string str, int n){

    for(int i = 0; i<n; i++){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            continue;
        }
        else{
            cout << str[i] << "";
        }
    }
}

int main(){

    cout << "Enter a string: " << endl;
    string str;
    getline(cin, str);

    removeVowels(str, str.length());

    return 0;
}