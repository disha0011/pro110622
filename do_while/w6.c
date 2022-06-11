#include<stdio.h>
#include<conio.h>

void main()
{   int i=1,j,sum=0;
 
    while(i<=10)
    {
      sum=sum+i;
      printf("\n%d",i++);
    }
     printf("\ntotal sum=%d",sum);
    }