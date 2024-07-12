#include<iostream>
using namespace std ;

class anuj {
    private:
    int x;
    public:
    anuj(int n ) : x(n){}
    friend int add( anuj &a, class nakul &b, class mudit &c);
};
class nakul {
    private:
    int y;
    public:
    nakul(int n ) : y(n){}
     friend int add( anuj &a, nakul &b, mudit &c);
};
class mudit {
    private:
    int z;
    public:
    mudit(int n ) : z(n){}
     friend int add( anuj &a, nakul &b, mudit &c);
};
int add( anuj &a, nakul &b, mudit &c){
    return a.x + b.y + c.z;
}
int main (){
    anuj objA(5);
    nakul objB(10);
    mudit objC(15);
    int sum =add( objA,objB,objC);
    cout<<sum;
}