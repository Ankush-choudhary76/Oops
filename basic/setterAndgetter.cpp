#include<iostream>
#include<string>
using namespace std;

class book {
    private:
    string book_name;
    int bookpages;
    float price;
    public:

    void setdata(){
        cout<<"enter book name : ";
        cin>>book_name;
         cout<<"enter book pager : ";
        cin>>bookpages;
         cout<<"enter book price : ";
        cin>>price;
    }
    void getdata(){
        cout<<book_name<<endl;
         cout<<bookpages<<endl;
          cout<<price<<endl;
    }
};
int main (){
    book b1,b2;
    b1.setdata();
    b1.getdata();
    b2.setdata();
    b2.getdata();
}