#include<stdio.h>
#include<stdlib.h>
int maxsumcomb(int arr[],int size)
{
    int i=0,j=0;
    int a=0,b=0;
    int max=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]*arr[j]>max && arr[i]!=arr[j])
            {
                a=arr[i];
                b=arr[j];
                max=arr[i]*arr[j];
            }
        }
    }

    return a+b;
}
int main()
{
    int size=0;
    int *arr=NULL;
    int i=0;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    arr=(int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Addition of combination that produces the max product %d",maxsumcomb(arr,size));
    return 0;
}