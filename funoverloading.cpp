#include<iostream>
using namespace std;

class demo 
{
    public:
    int Addition(int no1,int no2)   // Addition@2ii
    {
        int Ans=0;
        Ans=no1+no2;
        return Ans;
    }

    int Addition(int no1,int no2,int no3)  //Addition@3iii
    {
        int Ans=0;
        Ans=no1+no2+no3;
        return Ans;
    }

    int Addition(int no1,int no2,int no3,int no4)   //Addition@4iiii
    {
        int Ans=0;
        Ans=no1+no2+no3+no4;
        return Ans;
    }
};
int main ()
{
    demo obj;
    int ret=0;

    ret=obj.Addition(10,11);    //obj.Addition@2ii(10,11);
    cout<<ret<<"\n";

    ret=obj.Addition(10,11,13);    //obj.Addition@3iii(10,11,13);
    cout<<ret<<"\n";

    ret=obj.Addition(10,11,13,14);    //obj.Addition@4iiii(10,11,13,14);
    cout<<ret<<"\n";

    return 0;
}