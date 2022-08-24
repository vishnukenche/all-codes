#include<stdio.h>

/* 0 to 10   100
   10  to 40   500
   40  to   __   300
*/


int main ()
{
    auto int iage =0;

    printf("enter your age\n");
    scanf("%d",&iage);

    if((iage>=0) && (iage<=10))
    {
        printf("your ticket ammount is :100\n");
    
    }
    else if((iage>10) && (iage<=40))
    {
        printf("your ticket ammount is :500\n");
    }
    else if(iage>40)
    {
        printf("your ticket ammount is :300\n");
    }


    return 0;
}