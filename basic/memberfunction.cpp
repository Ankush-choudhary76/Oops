#include<iostream>
#include<string>
using namespace std ;

// class student {
//     private:
//     int n =10;
//     public:
//     // member fuction inside class
//     // void display (){

//     //     cout<<"value of n is :"<<n<<endl;
//     // }
//      // member fuction outside class
//      void display ();
// };

// void student ::display(){
//  cout<<"value of n is :"<<n<<endl;
// }


// int main (){
//     student s ;
//     s.display();
// }
class student {
    private:
    
    public:
      void display (int , string  );
//   void  display(int n , string name){
//  cout<<"value of n is :"<<n<<" and "<<endl;
// cout<<name;
// }
};

void student ::display(int n , string name){
 cout<<"value of n is :"<<n<<" and "<<name<<endl;
}


int main (){
    student s ;
    // int n ,m;
    // cout<<"enter the n and m ";
    // cin>>n>>m;
    s.display(1, "sanjay");
}