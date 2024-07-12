#include<iostream>
using namespace std ;

class car {
    string name ;
    public:
 
    car(string n ){
        name = n;
        cout<<name<<"   constructor is created "<<endl;
    }

     ~ car( ){
        
    //    cout<<name<<"   destructor is created "<<endl;
    }
};

int main (){
    car c1("toyta");
    car c2 ("suzuki");
  
}