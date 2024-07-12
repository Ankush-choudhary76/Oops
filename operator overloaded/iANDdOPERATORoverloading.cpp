// #include <iostream>
// using namespace std;

// class test
// {
//    int n = 0;

// public:
//    void operator++()
//    {
//       ++n;
//    }

//    void operator++(int)
//    {
//       n++;
//    }
//    void operator--()
//    {
//       --n;
//    }

//    void operator--(int)
//    {
//       n--;
//    }

//    void show()
//    {
//       cout << "Value of n is :" << n << endl;
//    }
// };
// int main()
// {
//    test obj1;
//    ++obj1;
//    obj1.show();
//    obj1++;
//    obj1.show();

//    --obj1;
//    obj1.show();
//    obj1--;
//    obj1.show();
// }

#include <iostream>
using namespace std;

class test
{
   int n = 0;

public:
   void operator++()
   {
      ++n;  
   }    

   void operator++(int)
   {
      n++;
   }
      void show()
   {
      cout << "Value of n is :" << n << endl;
   }
};
int main()
{
   test obj1;
   ++obj1;
   obj1.show();

   obj1++;
   obj1.show();
}