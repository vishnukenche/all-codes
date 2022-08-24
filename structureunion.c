#include<stdio.h>

    //structure declaration
struct demo
{
    int iNo;
    float fValue;
    int iValue;

};

int main()
{
    //structure object creation
    struct demo obj;

    // object initialization
    obj.iNo=11;
    obj.fValue=10.11;
    obj.iValue=21;
  

    printf("%d\n",obj.iValue);  //21
    printf("%d\n",sizeof(obj));  //20



    return 0;
}