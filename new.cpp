#include<iostream>
using namespace std;

int main ()
{
    int Arr[10];

    int *p=NULL;

    //     p=(int*)malloc(sizeof(int)*10);

    p=new int[10];

    if(p==NULL)
    {
        cout<<"unable to allocate memory\n";
    }
    else
    {
        cout<<"memory gets allocated successfully at address :"<<p<<"\n";

        //   free(p);

        delete []p;

    }
    return 0;
}