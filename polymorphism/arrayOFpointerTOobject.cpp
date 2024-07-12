#include<iostream>
using namespace std ;
class parents{
    public:
    void show(){
        cout<<"ram ram bhai sariyan ne "<<endl;
    }
};
int main (){
    parents *ptr[5];
    for(int i=0;i<=4;i++){
        ptr[i]=new parents;
        ptr[i]->show();    
    }

}