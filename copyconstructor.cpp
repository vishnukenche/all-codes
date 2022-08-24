#include<iostream>
using namespace std;

class demo
{
   public:
   int x;
   int y;

   demo ()
   {
      cout<<"inside default constructor\n";
      x=0;
      y=0;
   }

   demo(int i,int j)
   {
       cout<<"inside parametrised constructor\n";
       x=i;
       y=j;
   }

   demo(demo &ref)
   {
       cout<<"inside copy constructor\n";
       x=ref.x;
       y=ref.y;
   }

   ~demo()
   {
       cout<<"inside destructor\n";
   }
};

int main ()
{
   demo obj1(11,21);
   demo obj2(obj1);

   cout<<sizeof(obj1)<<"\n";
   cout<<sizeof(obj2)<<"\n";

   cout<<"value of x in obj1 :"<<obj1.x<<"\n";   //11
   cout<<"value of x in obj2 :"<<obj2.x<<"\n";   //11

   obj1.x++;

   cout<<"value of x in obj1 :"<<obj1.x<<"\n";   //12
   cout<<"value of x in obj2 :"<<obj2.x<<"\n";   //11

   return 0;
}