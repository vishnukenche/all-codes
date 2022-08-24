#include<stdio.h>

   struct Demo
   {
      int i;
      int j;
      float f;
   };

   union Hello
   {
      int i;
      int j;
      float f;
   };

int main ()
{
   struct Demo dobj;
   union Hello hobj;

   printf("%d\n",struct Demo dobj );
   printf("%d\n",union Hello hobj );


   return 0;  
}