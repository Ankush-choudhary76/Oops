#include<iostream>
using namespace std ;

class complex {
    int real ,imag;
    public :

    complex (int r=0 , int i=0 ): real(r) , imag(i){}

         complex operator + (  complex  obj){
            complex t ;
            t.real = real + obj.real;
            t.imag = imag + obj.imag;
            return t ;
        }
    void display (){
        cout<<real<<" + "<<imag<<"i"<<endl; 
    }
};
int main (){
complex obj1(3,5);
obj1.display();
complex obj2(7,8);
obj2.display();
complex sum ;

 sum = obj1 + obj2 ;
 sum.display();

}