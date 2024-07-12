#include<iostream>
using namespace std ;


class counter
{
       static int count ;

public:

   counter()   {
    count++;
   }
   static void showcount(){
    cout<<" created object "<<count<<endl;
   }
};
  int counter :: count=0  ; 

int main()
{
    counter t1,t2;
    t1.showcount();
}