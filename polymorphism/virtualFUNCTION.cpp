#include<iostream>
using namespace std ;

class person {
    public :
     virtual void show(){
        cout<<" this is person class ...."<<endl;
    }
};
class emp : public person{
    public :
    void show (){
        cout<<" this is emp class"<<endl;

    }
};
class wok : public emp{
    public:
    void show(){
        cout<<"this is wok class "<<endl;
    }
};
int main (){
    person objpr;
    emp obje;
    wok objw;
    person *ptr;

    ptr= &objpr;
    ptr->show();

     ptr= &obje;
    ptr->show();

     ptr= &objw;
    ptr->show();
}