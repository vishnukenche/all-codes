#include<stdio.h>

int main ()
{
  int no1=10;
  const int no2=100;
  
  no1++;
  //no2++;
  
  no1=20;
  //no2=30;
  

  no1=50; 
  no1++;


  printf("%d\n",no1);
  printf("%d\n",no2);

  return 0;  
}