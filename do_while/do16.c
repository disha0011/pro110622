#include<stdio.h>

int main()
{
    int i=1,k=65;
  do
 {  
  int j=1;
    while(j<=5)
    {
       printf("%c\t",k++);
     j++;
   }
k++;
i++;
printf("\n"); 
 }while(i<=5); 
}