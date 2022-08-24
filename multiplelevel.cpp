#include<iostream>
using namespace std;

class base1
{
    public:
    int i,j;                  // 8
    base1()
    {
        cout<<"inside base1 constructor\n";

    }
    ~base1()
    {
        cout<<"inside base1 destructor\n";
    }
      
};

class base2 
{
    public:
    int x,y;               // 8
    base2()
    {
        cout<<"inside base2 constructor\n";
    }
    ~base2()
    {
        cout<<"inside base2 destructor\n";
    }

};
class derived : public base1, base2    
  //sequence matter karte base1 chi aani base2 chi
{
    public:
    int a;             //  8 + 8 + 4 = 20 bytes
    derived()
    {
        cout<<"inside derived constructor\n";
    }
    ~derived()
    {
        cout<<"inside derived destructor\n";
    }

};

int main()
{
    derived dobj;

    return 0;
}
