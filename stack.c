#include<stdio.h>


int Addition(int ino1, int ino2)
{
    auto int iAns=0;

    iAns = ino1+ino2;
    return iAns;
}

int main ()
{
    auto int ivalue1=0,ivalue2=0;
    auto int iRet=0;

    printf("enter the first number\n");
    scanf("&d",&ivalue1);

    printf("enter the second number\n");
    scanf("&d",&ivalue2);

    iRet=Addition(ivalue1,ivalue2);

    printf("Addition is : %d\n",iRet);

    return 0;
}