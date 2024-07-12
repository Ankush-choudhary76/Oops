#include<iostream>
using namespace std ;

class animal {
    public: 
    int leg = 4;
};

class dog : public animal{
    public :
    int tail = 1;

};
int main (){
    dog s1 ;
    cout<<"leg are : "<<s1.leg<<endl;
    cout<<"tail are : "<<s1.tail;
}