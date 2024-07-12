
#include<iostream>
using namespace std ;

class simple {
    public:
    void show (){

        cout<<" ram ram bhai sariyane "<<endl;
    }

};

int main (){
    simple T1 , T2;
    cout<<"  T1 DATA "<<endl;
    T1.show();
    T1=T2;
    cout<<"  T2 DATA "<<endl;
    T2.show();
}