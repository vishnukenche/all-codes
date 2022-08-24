#include<iostream>
using namespace std;

class demo
{
    public:                 //private:
    int x;
    int y;
    
    demo(int i=10,int j=20)
    {
        x=i;
        y=j;
    }
    friend demo operator + (demo op1,demo op2);
};

demo operator + (demo op1,demo op2)
{
    cout<<"inside + operator\n";
    return demo(op1.x+op2.x,op1.y+op2.y);
}

int main()
{
    demo obj1(11,21);
    demo obj2(51,101);
    demo dobj(0,0);

    dobj=obj1 + obj2;       //dobj=+(obj1,obj2);
    cout<<dobj.x<<"\n";       // 62       
   
    cout<<dobj.y<<"\n";     // 122

    return 0;
}