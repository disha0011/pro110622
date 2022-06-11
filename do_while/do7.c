#include<stdio.h>
#include<conio.h>

void main()
{   int i=1,j=5,multi;   
    do
    {      
      multi=i*j;
      printf("\%d *%d = %d\n",j,i++,multi);
    }while(i<=10);   
}