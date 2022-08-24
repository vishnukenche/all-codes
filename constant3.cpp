#include<iostream>
using namespace std;

class demo
{
    public:
    int i;
    const int j;

    demo():j(20)      // member initialisation aas kra 
    {
        i=10;
        // j=20;    // error yeto
    }

    demo(int a,int b):j(b)
    {
        i=a;
       
    }
};

int main()
{
    demo dobj(11,21);   

    cout<<dobj.i<<"\n";    //11
    cout<<dobj.j<<"\n";     //21

    return 0;
}