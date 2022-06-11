#include<stdio.h>

int main()
{
    int i=1;
  do
 {
    int j=1;
   while(j<=5)
    {
       printf("%d\t",i);
         j++;
   }
i++;
printf("\n"); 
 }  while(i<=5);
}