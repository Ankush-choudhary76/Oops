#include<iostream>
using namespace std ;

class complex {
int real, imag;
public:

void setdata(int r , int i){
    real=r;
    imag = i ;
}

complex operator + (complex obj){
    complex o2;
    o2.real = real + obj.real;
    o2.imag = imag + obj.imag;
    return o2;
}
void display(){
    cout<<real<<" + "<<imag<<"i"<<endl;
    }

};
int main (){
complex obj1,obj2,sum;
obj1.setdata(3,5);
obj1.display();

obj2.setdata(7,8);
obj2.display();

sum = obj1 + obj2;
sum.display();

}