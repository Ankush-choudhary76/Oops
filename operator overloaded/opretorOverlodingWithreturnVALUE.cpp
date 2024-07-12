#include <iostream>
using namespace std;

class test
{
    int n;

public:
    void setdata()
    {
        cin >> n;
    }
    test operator+(test obj)
    {
        test t;
        t.n = n + obj.n;
        return t;
    }
    // int display()
    // {        return n;
    // }
      void display(){
        cout<<"addition  " <<n<<endl;
      }
};


int main()
{

    test obj1, obj2, sum;
    cout << "enter value of obj 1 :";
    obj1.setdata();
    cout << "enter value of obj 2 :";
    obj2.setdata();
    sum = obj1 + obj2;
 // cout << "addition :" << sum.display();
 sum.display();
}