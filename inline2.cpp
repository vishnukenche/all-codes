#include<iostream>
using namespace std;

class demo
{
    public:
     int add(int no1,int no2);
     int sub(int no1,int no2);
    
};
int demo::add(int no1,int no2)     //function define demo:: aas kra
{
    int ans=0;
    ans=no1+no2;
    return ans;
}
int demo::sub(int no1,int no2)       //function define demo:: aas kra
{
    int ans=0;
    ans=no1-no2;
    return ans;
}

int main()
{
    demo obj;
    cout<<sizeof(obj)<<"\n";       // 1
    int ret=0;

    ret=obj.add(11,10);

    cout<<ret<<"\n";     // 21

    return 0;
}
