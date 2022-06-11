#include<stdio.h>
#include<conio.h>

int main()
{
      float i=0.5,j=0.5;
      do
      {
         j+=i;
        printf("\n%.2f",j);   
        i++;
       }
 while(i<=30);
}