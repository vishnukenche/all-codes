#include<iostream>
using namespace std;

class demo
{
    public:     // private:
        int x;
        int y;

        demo(int i = 0, int j = 0)
        {
            x = i;
            y = j;
        }
};

demo operator +(demo op)
{
        return op;
}

demo operator -(demo op)
{
        return demo(-op.x,-op.y);
        // return -op;
}

int main()
{
    demo obj1(11,-21);
    demo obj2(51,-101);
    demo dobj1(0,0);
    demo dobj2(0,0);

    dobj1 = +obj1;          // +(obj1)
    cout<<dobj1.x<<"\n";    // 11
    cout<<dobj1.y<<"\n";        // -21

    dobj2 = -obj2;          // -(obj2)
    cout<<dobj2.x<<"\n";        // -51
    cout<<dobj2.y<<"\n";        // 101

    return 0;
}