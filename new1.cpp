#include<iostream>
using namespace std;

class demo
{
    public:
    int x;
    int y;
    demo()
    {
        cout<<"inside default constructor\n";
    }
    ~demo()
    {
        cout<<"inside destructor\n";
    }
    
    void fun()
    {
        cout<<"inside fun\n";
    }
};

int main ()
{
    demo obj;

    demo *ptr=NULL;

    ptr=new demo;

    obj.fun();   //  direct accessing operator

    ptr->fun();     //   indirect accessing operator

    delete ptr;
    
    
    return 0;
}