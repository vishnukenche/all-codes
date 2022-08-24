#include<iostream>
using namespace std;

class Arithmatic 
{
    public:

    int no1;
    int no2;

    Arithmatic ()
    {
        cout<<"inside default constructor\n";
        no1=0;
        no2=0;
    }

    Arithmatic (int A, int B)
    {
        cout<<"inside parametrised constructor\n";
        no1=A;
        no2=B;
    }

    ~Arithmatic ()
    {
        cout<<"inside destructor\n";

    }

    int Addition ()
    {
        int iAns=0;
        iAns=no1+no2;
        return iAns;
    }

    int subtraction ()
    {
        int iAns=0;
        iAns=no1-no2;
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

    Arithmatic obj1();
    Arithmatic obj2(ivalue1,ivalue2);

    iret=obj2.Addition();
    cout<<"Addition is :"<<iret<<"\n";

    iret=obj2.subtraction();
    cout<<"subtraction is :"<<iret<<"\n";

    return 0;
}