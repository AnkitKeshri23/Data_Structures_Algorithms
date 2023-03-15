// Set-> stores unique elements..Its implements using BST..return element in sorted array...Only insert or delete..no modification..it is slower than unordered set😒
// Time complexity of erase, find, insert and count is -> 0(logn)


#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(0);
    s.insert(32);
    s.insert(12);
    s.insert(45);
    s.insert(2);
    s.insert(19);

    cout<<"Set before erasing: "<<endl;
    for(int i: s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);

    cout<<"Set after erasing: "<<endl;
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"2 is Present Or Not: "<<s.count(2)<<endl;

    set<int>::iterator itr = s.find(2);
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    return 0;
}