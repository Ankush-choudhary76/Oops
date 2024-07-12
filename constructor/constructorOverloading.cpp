#include <iostream>
#include <string>
using namespace std;

class test
{
public:
    test()
    {
        cout << " Eror 404...default construction  :";
    }
    test(int num)
    {
        n = num;
        cout << n << endl;
    }
    test(int num, float r, string a)
    {
        n = num;
        f = r;
        name = a;
        cout<<n<<"\n"<<f<<endl<<a<<endl;
    }

private:
    int n;
    float f;
    string name;
};
int main()
{
    test t1   (4 , 5.999 , "sanjay") ,   t2(111),   t;
}