#include<stdio.h>


int main ()
{
  int Arr[5]={10,20,30,40,50};

  printf("%d\n",Arr[0]);     //10
  printf("%d\n",Arr[4]);      //50
  printf("%d\n",Arr);         //100
  printf("%d\n",&Arr);        //100
  printf("%d\n",Arr+1);      //104
  printf("%d\n",(&Arr)+1);      //120
  printf("%d\n",sizeof(Arr));       //20
  printf("%d\n",sizeof(Arr[2]));     //4

  return 0;  
}