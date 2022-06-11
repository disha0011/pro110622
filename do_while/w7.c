#include<stdio.h>
#include<conio.h>

void main()
{   int i=0,j,sum=0;
   
    do
    {
      sum=sum+i;
      printf("\n%d",i);
      i+=2;
    }while(i<=10);
     printf("\neven sum=%d",sum);

}