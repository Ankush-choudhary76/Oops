//                              PUBLISHER MANAGEMENT SYSTEM 
#include<iostream>
using namespace std ;
class publisher{
    private :
    float price ;
    public :
    void getdata(){
        cout<<"ENTER A PRICE :"<<endl;
        cin>>price;
    }
    void putdata(){
        cout<<"price are :"<<price<<endl;
    }

};
class book : public publisher{
    private :
    float pages ;
    public :
    void getdata(){
        cout<<"ENTER A PAGES :"<<endl;
        cin>>pages;
         publisher::getdata();
    }
   
     void putdata(){
        cout<<"pages are :"<<pages<<endl;
        publisher::putdata();
    }
};
class tape : public publisher{
    private :
    float time ;
    public :
    void getdata(){
        cout<<"ENTER A TIME :"<<endl;
        cin>>time;
          publisher::getdata();
    }
     void putdata(){
        cout<<" time are :"<<time<<endl;
         publisher::putdata();
    }
};
int main (){
    book b ;
    tape t ;
  int op;
  cout<<"1. BOOK INFORMATION "<<endl;
  cout<<"2. TAPE INFORMATION "<<endl;
  cout<<"......................"<<endl;
  cout<<" ENTER YOUR CHOISE "<<endl;
  cin>>op;
  switch (op)
  {
  case 1 :
  b.getdata();
  b.putdata();
    break;
    case 2 :
  b.getdata();
  b.putdata();
    break;
  
  default:
  cout<<" Sahi number choose krle bkl ";
    break;
  }
}