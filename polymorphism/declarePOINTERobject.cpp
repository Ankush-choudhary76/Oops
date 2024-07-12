#include<iostream>
using namespace std ;
class parents {
    public:
    void show (){
        cout<<" hy i am ankush";
    }
};
int main (){
    parents *ptr;
   ptr=new parents;
    ptr -> show();
}