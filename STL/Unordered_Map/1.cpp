#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    //creation
    unordered_map<string,int> m;

    //insertion
    // 1
    pair<string,int> p = make_pair("Ankit",4);
    m.insert(p);

    //2
    pair<string,int>pair2("Keshri", 12);
    m.insert(pair2);

    //3
    m["Kumar"] = 1;

    m["Kumar"] = 2;  //It updates the value of 1 to 2

    cout << m["Kumar"] << endl;
    cout << m.at("Ankit") << endl;

    cout << m["unknownKey"] << endl;  //makes a new entry of "unknownKey" with value 0

    cout << m.at("unknownKey") << endl;

    //size
    cout << m.size() << endl; //4

    //present or not 
    cout << m.count("bro")<< endl; //0
    cout << m.count("Ankit") << endl; //1

    //erase
    // m.erase("Keshri");
    // cout << m.size() << endl; //3

    //Access key-value pair using for loop
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    //Access using iterator
    unordered_map<string, int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }






    return 0;
}