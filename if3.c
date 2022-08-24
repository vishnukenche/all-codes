#include<stdio.h>

int main ()
{
    auto int istd =0;

    printf("enter your standard\n");
    scanf("%d",&istd);

    if(istd==1)
    {
        printf("your exam is at 8\n");
    }
    else if(istd==2)
    {
        printf("your exam is at 9\n");
    }
    else if(istd==3)
    {
        printf("your exam is at 10\n");
    }
    else if(istd==4)
    {
        printf("your exam is at 11\n");
    }
    else
    {
        printf("invalid standard");
    }

    return 0;
}