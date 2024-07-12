#include<iostream>
using namespace std ;

class parent {
    public:

    parent(){
        cout<<"parent class constructor call"<<endl;
    }
     ~parent(){
        cout<<"parent class distructor call"<<endl;
    }

};
class child1 : public parent {
    public:

    child1(){
        cout<<"child 1  class constructor call"<<endl;
    }
     ~child1(){
        cout<<"child 1 class distructor call"<<endl;
    }

};
class child2 : public child1 {
    public:

    child2(){
        cout<<"child 2 class constructor call"<<endl;
    }
     ~child2(){
        cout<<"child 2 class distructor call"<<endl;
    }

};

int main (){
 child2 c1;
}