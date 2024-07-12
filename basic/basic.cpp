#include<iostream>
using namespace std ;

class simple {
    private:
    int n =10;
    public:
    void show (){

        cout<<"value of n is :"<<n<<endl;
    }

};

int main (){
    simple T;
    T.show();
}