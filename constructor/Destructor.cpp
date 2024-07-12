#include<iostream>
using namespace std ;

class simple {
public:
    simple(){ 
        
        cout<<"constructor is call...."<<endl;
    }
    ~simple(){
        cout<<"distructor is call..."<<endl;
    }
};
void object(){
    simple s1,s2;

}
int main (){
    object() ;
    cout<<"both are done"<<endl;
    system("pause");
    simple s3;
}