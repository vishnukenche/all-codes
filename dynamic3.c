#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int Arr[5];       //static memory allocation
    int size =0;
    int *ptr=NULL;
  
    printf("enter number of elements :");
    scanf("%d",&size);

    ptr =(int*) realloc(ptr,5*sizeof(int));

    if(ptr==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else 
    {
        printf("memory succesfully allocated\n");
    }

    free(ptr);

    return 0;
}