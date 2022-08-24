#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int Arr[0];       //static memory allocation
    int size =0;
    int *ptr=NULL;

    printf("enter number of elements :");
    scanf("%d",&size);

    ptr = malloc(size *sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory\n");
    }      // run kelyavr negative value takli tr Unable to allocate memory yetay
    else 
    {
        printf("memory succesfully allocated\n");
    }

    free(ptr);

    return 0;
}