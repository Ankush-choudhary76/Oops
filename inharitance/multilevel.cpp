#include<iostream>
using namespace std ;

class grandfather{
    public :
    void display2(){
        cout<<"grandfather"<<endl;
    }
};
class father : public grandfather {
    public:
     void display1(){
        cout<<"father"<<endl;
        display2();
    }
};
class son : public father {
    public:
     void display(){
        cout<<"son "<<endl;
        display1();

    }
};
int main (){
    son sobj;
    sobj.display();

}