#include<iostream>
using namespace std;

class demo
{
    public:
    int i;
    const int j;   // constant characteristics


    demo(int a,int b):j(b)
    {
        i=a;
    }
    void fun()
    {
        cout<<"inside fun\n";
        i++;    //allowed
        // j++;       //not allowed
    }
    // b is constant argument characterics
    void gun(int a,const int b)const   //constant function/behaviour
    {
        int x=10;
        const int y=20;
        
        cout<<"inside gun\n";
        //i++;       //not allowed
        // j++;        // not allowed
        x++;    // allowed
        //y++;    // not allowed

        a++;          //allowed
        // b++;       // not allowed
    }
};

int main()
{
    demo obj1(11,21);  
    const demo obj2(11,21);

    obj1.fun();       
    obj1.gun(10,20);      

    // obj2.fun();          // fkt constant function honar karan obj2 constant cha aahe
    obj2.gun(10,20);  

    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n";
    cout<<obj2.i<<"\n";
    cout<<obj2.j<<"\n";

    return 0;
}