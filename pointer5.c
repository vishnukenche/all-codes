  #include<stdio.h>

  int main ()
  {
    char cValue='M';
    char *cptr=&cValue;

    int iValue=21;
    int *iptr=&iValue;

    float fValue=10.11;
    float *fptr=&fValue;

    double dValue=20.11;
    double *dptr=&dValue;

    printf("%c\n",*cptr);
    printf("%d\n",&cValue);
    printf("%d\n",cptr);
    printf("%d\n",sizeof(cValue));
    printf("%d\n",sizeof(cptr));
    printf("%d\n",sizeof(*cptr));


    return 0;  
  }