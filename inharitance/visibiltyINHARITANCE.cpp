#include <iostream>
using namespace std;

class parents
{
private:
//    int n1 ;
protected:
   int n1;
    int n2;    
public:
    void show()
    {
        cout << "value of n1 " << n1 << endl;
        cout << "value of  n2 " << n2 << endl;
    }
};
class child : protected parents
{
    public:
    void input()
    {
        cout << " enter value of n1 :" << endl;
        cin >> n1;
        cout << " enter value of n2 :" << endl;
        cin >> n2;
          show();
    }

};

int main (){
    child s1;
    s1.input();
        // s1.show();
}