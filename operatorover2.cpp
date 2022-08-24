#include<iostream>
using namespace std;

class demo
{
        public:     // private:
        int x;
        int y;

        demo(int i = 10, int j = 20)
        {
            x = i;
            y = j;
        }

        friend demo operator + (demo op1, demo op2);
};

demo operator + (demo op1, demo op2)
{
    cout<<"Inside + operator\n";
    return demo(op1.x + op2.x, op1.y + op2.y);
}

demo operator - (demo op1, demo op2)
{
    cout<<"Inside - operator\n";
    return demo(op1.x - op2.x, op1.y - op2.y);
}

demo operator * (demo op1, demo op2)
{
    cout<<"Inside * operator\n";
    return demo(op1.x * op2.x, op1.y * op2.y);
}

demo operator / (demo op1, demo op2)
{
    cout<<"Inside / operator\n";
    return demo(op1.x / op2.x, op1.y / op2.y);
}

demo operator % (demo op1, demo op2)
{
    cout<<"Inside % operator\n";
    return demo(op1.x % op2.x, op1.y % op2.y);
}

int main()
{
    demo obj1(11,21);
    demo obj2(51,101);
    demo dobj(0,0);

    dobj = obj1 * obj2;     // robj = +(obj1, obj2);
    cout<<dobj.x<<"\n";     // 561
    cout<<dobj.y<<"\n";     // 2121

    dobj = obj1 - obj2;     // robj = +(obj1, obj2);
    cout<<dobj.x<<"\n";     // -40
    cout<<dobj.y<<"\n";     // -80

    dobj = obj1 / obj2;     // robj = +(obj1, obj2);
    cout<<dobj.x<<"\n";     // 0
    cout<<dobj.y<<"\n";     // 0

    dobj = obj1 % obj2;     // robj = +(obj1, obj2);
    cout<<dobj.x<<"\n";     // 11
    cout<<dobj.y<<"\n";     // 21
   
    return 0;
}