#include<iostream>
using namespace std;

class demo
{
    public:
    int x;
    int y;

    
    demo(int i=10,int j=20)
    {
        x=i;
        y=j;
    }
    
};

bool operator==(demo op1,demo op2)
{
    if((op1.x==op2.x) && (op1.y==op2.y))
    {
        return true;
    }
    {
        return false;
    }
}
bool operator>(demo op1,demo op2)
{
    if((op1.x>op2.x) && (op1.y>op2.y))
    {
        return true;
    }
    {
        return false;
    }
}

int main()
{
    demo obj1(11,21);
    demo obj2(51,101);

    if(obj1==obj2)        // ==(obj1,obj2)
    {
        cout<<"objects are same\n";
    }
    else
    {
        cout<<"objects are different\n";
    }

    if(obj1>obj2)        // ==(obj1,obj2)
    {
        cout<<"obj1 is greater\n";
    }
    else
    {
        cout<<"obj2 is greater\n";
    }

    return 0;
}