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
};

int main()
{
    demo dobj;   

    cout<<dobj.i<<"\n";       // 10
    cout<<dobj.j<<"\n";       // 20

    return 0;
}