#include <iostream>
using namespace std;

class test
{
private:
    int n;

public:
    void getdata()
    {
        cout << "Enter the value of N : ";
        cin >> n;
    }

    void operator+(test obj)
    {
        test t;
        t.n = n + obj.n;
        cout << t.n;
    }
};

int main()
{

    test obj1, obj2, obj3;

    cout << "enter obj1 data ";
    obj1.getdata();

    cout << "enter obj2 data ";
    obj2.getdata();

    obj1 + obj2;
}