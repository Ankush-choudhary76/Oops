 #include <iostream>
 using namespace std;
             //       default construction
// class simple
// {
// public:
//     simple()
//     {
//         cout << "constructor is call...." << endl;
      
//     }
//     void display()
//     {
//         cout << " fun call " << endl;
//     }
// };
// int main()
// {
//     simple t ;

//      t.display();
// }


// prameterized construction

class simple
{
    int n;
    string name;

public:
    simple(int num, string a)
    {
        n = num;
        name = a;
    }
    void display()
    {
        cout << "n : " << n << endl;
        cout << "name : " << name << endl;
    }
};
int main()
{
    simple t(4, "sanjay");
    t.display();
}