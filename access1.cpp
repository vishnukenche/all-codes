#include<iostream>
using namespace std;

class demo
{
    public:
    int i;
    private:
    int j;
    protected:
    int k;

};
class hello : public demo  
//hello is a class which derived from demo class
{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
    public:
    void fun()
    {
        cout<<k<<"\n";
    }

};

int main ()
{
    cout<<sizeof(demo)<<"\n";
    cout<<sizeof(hello)<<"\n";

    demo dobj;
    dobj.i;  //A
    //dobj.j;   //NA
    //dobj.k;  //NA
    hello hobj;
    hobj.x;   //A
    //hobj.y;   //NA
    //hobj.z;    //NA
    cout<<hobj.i<<"\n";    //A
    //hobj.j;    //NA 
    //hobj.k;     //NA

    hobj.fun();

    return 0;
}
