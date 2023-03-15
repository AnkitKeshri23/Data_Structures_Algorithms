#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
        int health ;

    public:
        char level;


    // parameterized constructor
    Hero(int health){
        // cout << "this-> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout << level << endl;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }

 
};


int main(){

//  Object create statically
    Hero Ankit(10);

    // cout << "Address of Ankit: " << &Ankit << endl;
    // cout << Ankit.gethealth() << endl;
    Ankit.print();
    
// Dynamically
    Hero *h  = new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();










    // // static allocation
    // Hero a;
    // a.sethealth(90);     //private
    // a.level = 'A';       //public   

    // cout << "Health is: " << a.gethealth() << endl;
    // cout << "Level is: " << a.level << endl;

    // //Dynamic Allocation
    // Hero *b = new Hero;
    // b->sethealth(80);     //private
    // b->level = ('B');     //public  

    // cout << "Health is: " << (*b).gethealth() << endl;
    // cout << "Level is: " << (*b).level << endl;

    // cout << "Health is: " << b->gethealth() << endl;
    // cout << "Level is: " << b->level << endl;






    // //creation of object
    // Hero Ankit;

    // cout << "Size: " << sizeof(Ankit) << endl;
 

    // Ankit.sethealth(80);
    // cout << "Health is: " << Ankit.gethealth() << endl;

    // Ankit.level = 'A';

    // cout << "Level is: " << Ankit.level << endl;

    return 0;
}