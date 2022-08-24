#include<stdio.h>

int main ()
{
    int Arr[5]={10,20,30,40,50};

    int *p =&(Arr[0]);

    int *q =&(Arr[4]);

    printf("value of p is %d\n",p);

    p=p+3;

    printf("value of p %d\n",p);

    printf("value of q is %d\n",q);

    q=q-2;

    printf("value of q %d\n",q);

    return 0;
}