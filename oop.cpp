#include<iostream>
using namespace std;

class Arithematic
{
    public:
    //  characteristics
    int ino1;
    int ino2;

    //behaviour

    Arithematic()  // default constructor
    {
        cout<<"inside default constructor\n";
        ino1=0;
        ino2=0;
    }

    Arithematic(int A,int B)   //parametrised constructor
    {
        cout<<"inside parametrised constructor\n";
        ino1=A;
        ino2=B;
    }

    ~Arithematic()
    {
        cout<<"inside distructor\n";
    }

    int Addition()
    {
        int iAns=0;
        iAns=ino1+ino2;
        return iAns;
    }

    int subtraction()
    {
        int iAns=0;
        iAns=ino1-ino2;
        return iAns;
    }
};

int main ()
{
    int ivalue1=0,ivalue2=0,iret=0;

    cout<<"enter the first number\n";
    cin>>ivalue1;

    cout<<"enter the second number\n";
    cin>>ivalue2;

    Arithematic obj1();
    Arithematic obj2(ivalue1,ivalue2);

    iret =obj2.Addition();
    cout<<"addition is :"<<iret<<"\n";

    iret=obj2.subtraction();
    cout<<"subtraction is :"<<iret<<"\n";

    return 0;
}
