#include<stdio.h>

int main ()
{
    int Arr[5]={10,20,30,40,50};

    int *p =&(Arr[0]);

    int *q =&(Arr[4]);

    printf("value of q before decrement is %d\n",q);

    q--;

    printf("value of q after decrement is %d\n",q);

    




  return 0;
}