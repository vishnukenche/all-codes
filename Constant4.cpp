#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)
        {
            i = 10;
            // j = 20;
        }

        Demo(int a, int b) :i(a),j(b)
        {
            cout<<"Inside parametrised\n";
        }
};

int main()
{
   Demo obj(11,21);

   cout<<obj.i<<"\n";           // 11
   cout<<obj.j<<"\n";           // 21

   obj.i++;
    // obj.j++;
   cout<<obj.i<<"\n";            // 12


    return 0;
}