#include<iostream>
using namespace std ;

class base1{
    public :
    void show2(){
        cout<<" base 1"<<endl;
    }
};
class base2{
    public :
    void show1(){
        cout<<" base 2"<<endl;
    }
};

class derived : public base1, public  base2 {
    public:
      void show () {
    cout<<" derived "<<endl;
    show1();
    show2();
    }
};
int main (){
    derived d1;
    d1.show();
    // d1.show1();
    // d1.show2();

}