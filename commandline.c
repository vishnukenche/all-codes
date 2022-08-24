#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{

    printf("name of executable is: %s\n",argv[0]);

    printf("number of command line arguments are: %d\n",argc);

    int ans=atoi(argv[1]) +atoi(argv[2]);
    printf("Addition is:%d\n",ans);

    return 0;
}

////     gcc commandline.c   /////     <-- compilation
////    a  10 11  ////      <-- run