#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(12);
    v.push_back(15);
    v.push_back(19);
    v.push_back(22);
    v.push_back(25);
    v.push_back(35);

    cout<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl<<endl;

    cout<<"Finding 14-> "<<binary_search(v.begin(),v.end(),14)<<endl<<endl;

    cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),15)-v.begin()<<endl;
    cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),15)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"Max-> "<<max(a,b)<<" ";
    cout<<"Min-> "<<min(a,b)<<endl<<endl;

    cout<<"Before Swapping: "<<endl;
    cout<<"a-> "<<a<<" "<<"b-> "<<b<<endl<<endl;

    cout<<"AFter Swapping: "<<endl;
    swap(a,b);
    cout<<"a-> "<<a<<" "<<"b-> "<<b<<endl<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"String-> "<<abcd<<endl<<endl;

    
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(), v.end());      //Intro sort-> combination of quick sort, heap sort, insertion sort
    for(int i:v){
        cout<<i<<" ";
    }



    return 0;
}