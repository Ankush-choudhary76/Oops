#include <iostream>
using namespace std;

class animal
{
public:
    void eat()
    {
        cout << " animal is eating .. " << endl;
    }
};

class dog :  public animal
{
public:
    void bark()
    {
        cout << "  dog  is barking.. " << endl;
        eat();
    }
};
class cat : public animal
{
public:
    void meow()
    {
        cout << " cat meow meow .. " << endl;
    }
};
class catout : public animal
{
public:
    void meowout()
    {
        cout << " outcat meow meow .. " << endl;
    }
};

int main()
{
    dog d;
    cat c;
      catout e;
    // d.eat();
    d.bark();

    c.meow();
    c.eat();
    e.meowout();
}