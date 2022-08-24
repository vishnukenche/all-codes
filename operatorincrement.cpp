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
demo operator ++(demo &op)     
{
    op.x++;
    op.y++;
    return op;
}

demo operator ++(demo &op,int)     // dummy argument  int ghetla aahe
{
    op.x++;
    op.y++;
    return demo(op.x-1,op.y-1);
}

int main()
{
    demo obj1(10,20);
    demo obj2(10,20);

    demo dobj1(0,0);
    demo dobj2(0,0);

    dobj1=++obj1;      // without dummy
    cout<<obj1.x<<"  "<<obj1.y<<"\n";     // 11   21
    cout<<dobj1.x<<"  "<<dobj1.y<<"\n";   // 11   21

    dobj2=obj2++;      // with dummy
    cout<<obj2.x<<"  "<<obj2.y<<"\n";     // 11   21
    cout<<dobj2.x<<"  "<<dobj2.y<<"\n";   // 10   20

    return 0;
}