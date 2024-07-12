#include<iostream>
#include<string>

using namespace std;

class name 
{  
    string str; 
public:  
    void input() 
    {  
        cout << "enter your string: ";  
        cin>>str;
    }  
    
    void display()  
    {  
        cout << "String: " << str;  
    }  
    
    name operator+(name s)   
    {  
        name obj;
        obj.str = str + s.str; 
        return obj;  
    }  
};  

int main()  
{  
    name s1, s2, s3;
    s1.input();  
    s2.input();  
    s3 = s1 + s2;  
    s3.display();  
    
}