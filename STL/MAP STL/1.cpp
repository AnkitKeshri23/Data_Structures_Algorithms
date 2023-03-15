// Map== Same key doesn't point two value


#include<iostream>
#include<map>
using namespace std;
 
int main(){
    map<int, string> m;

    m[1] = "Ankit";
    m[12] = "Akash";
    m[3] = "Aniket";

    m.insert({5, "Thakur"});

    cout<<"Finding 12-> "<<m.count(12)<<endl;

    cout<<endl;

    cout<<"Before erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;


    m.erase(1);
    cout<<"After erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;

    cout<<"Find 3-> "<<endl;
    auto it = m.find(3);

    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


    return 0;
}