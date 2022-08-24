#include<iostream>
using namespace std;

float Area(float fradius,float PI=3.14)
{
    float fans=0;
    
    fans=(PI*fradius*fradius);
    return fans;
}

int main ()
{
    float fret=0.0;
    fret=Area(10.4,3.14);
    cout<<fret<<"\n";

    fret=Area(10.6);
    cout<<fret<<"\n";

    fret=Area(25.40 );
    cout<<fret<<"\n";

    return 0;
}
    